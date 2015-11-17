# (C) 2007-2009, Miguel Chavez Gamboa
# run this as: cat upgrade-database_0.6_to_0.7.sql | mysql -u root -p

USE lemondb;

#Inserting new fields
alter table products add `alphacode` VARCHAR( 20 ) NULL after points;
alter table products add `lastproviderid` int(10) unsigned NOT NULL default '1' after alphacode;

#Some tables where created with a latin1 charset and collate. so change them.
ALTER TABLE transactions DEFAULT CHARACTER SET utf8 COLLATE utf8_general_ci;
ALTER TABLE offers DEFAULT CHARACTER SET utf8 COLLATE utf8_general_ci;


CREATE TABLE IF NOT EXISTS `transactionitems` (
 `transaction_id` bigint(20) unsigned NOT NULL,
 `position` int(10) unsigned NOT NULL,
 `product_id` bigint(20) unsigned NOT NULL,
 `qty` double default NULL,
 `points` double default NULL,
 `unitstr` varchar(50) default NULL,
 `cost` double default NULL,
 `price` double default NULL,
 `disc` double default NULL,
 `total` double default NULL,
 `name` varchar(255) default NULL,
 UNIQUE KEY `transaction_id` (`transaction_id`,`position`),
 KEY `product_id` (`product_id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

CREATE TABLE IF NOT EXISTS `cashouts` (
  `id` bigint(20) unsigned NOT NULL auto_increment,
  `type` smallint(5) unsigned NOT NULL default '1',
  `userid` bigint(20) NOT NULL default '1',
  `reason` varchar(100) default NULL,
  `amount` double unsigned NOT NULL default '0',
  `date` date NOT NULL,
  `time` time NOT NULL,
  `terminalnum` int(10) unsigned NOT NULL default '1',
  PRIMARY KEY  (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=1 DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

CREATE TABLE IF NOT EXISTS `cashouttypes` (
  `typeid` int(10) unsigned NOT NULL auto_increment,
  `text` varchar(50) character set utf8 collate utf8_general_ci NOT NULL,
  PRIMARY KEY  (`typeid`)
) ENGINE=MyISAM AUTO_INCREMENT=1 DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

CREATE TABLE IF NOT EXISTS `providers` (
  `id` int(10) unsigned NOT NULL auto_increment,
  `name` VARCHAR( 20 ) NULL,
  `address` varchar(255) collate utf8_general_ci default NULL,
  `phone` varchar(50) character set utf8 collate utf8_general_ci default NULL,
  `cellphone` varchar(50) collate utf8_general_ci default NULL,
  PRIMARY KEY  (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=1 DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

CREATE TABLE IF NOT EXISTS `products_providers` (
  `provider_id` int(10) unsigned NOT NULL,
  `product_id` bigint(20) unsigned NOT NULL,
  KEY  (`product_id`)
) ENGINE=MyISAM AUTO_INCREMENT=1 DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

CREATE TABLE IF NOT EXISTS `lots` (
  `lotnum` VARCHAR(20) NOT NULL default 'UNDEFINED',
  `productiondate` date NOT NULL,
  `expirationdate` date NOT NULL,
  PRIMARY KEY  (`lotnum`)
) ENGINE=MyISAM AUTO_INCREMENT=1 DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

CREATE OR REPLACE VIEW `v_transactions` AS
select
concat( DATE_FORMAT( t.date, '%d/%m/%Y' ) , ' ', TIME_FORMAT( t.time, '%H:%i' ) ) AS datetime,
t.id AS id,
t.clientid AS clientid,
t.userid AS userid,
t.itemcount AS itemcount,
t.disc AS disc,
t.amount AS amount,
t.date AS date
from transactions t
where t.type = 1 and t.state=2 group by datetime;

CREATE TABLE IF NOT EXISTS `transactionitems` (
 `transaction_id` bigint(20) unsigned NOT NULL,
 `position` int(10) unsigned NOT NULL,
 `product_id` bigint(20) unsigned NOT NULL,
 `qty` double default NULL,
 `points` double default NULL,
 `unitstr` varchar(50) default NULL,
 `cost` double default NULL,
 `price` double default NULL,
 `disc` double default NULL,
 `total` double default NULL,
 `name` varchar(255) default NULL,
 UNIQUE KEY `transaction_id` (`transaction_id`,`position`),
 KEY `product_id` (`product_id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;


CREATE OR REPLACE VIEW `v_transactionsbydate` AS
select `transactions`.`date` AS `date`,
count(1) AS `transactions`,
sum(`transactions`.`itemcount`) AS `items`,
sum(`transactions`.`amount`) AS `total`
from `transactions`
where ((`transactions`.`type` = 1) and (`transactions`.`itemcount` > 0) and (`transactions`.`state`=2))
group by `transactions`.`date`;


#Insert default cashout types
INSERT INTO lemondb.cashouttypes (typeid, text) VALUES(1, 'Normal');
INSERT INTO lemondb.cashouttypes (typeid, text) VALUES(2, 'Money return on ticket cancel');
INSERT INTO lemondb.cashouttypes (typeid, text) VALUES(3, 'Money return on product return');

#In case not updated to 0.6.1
delete from lemondb.transactionstates;

#Insert default transactions states (very important to keep these ids)
INSERT INTO lemondb.transactionstates (stateid, text) VALUES(1, 'Not Completed');
INSERT INTO lemondb.transactionstates (stateid, text) VALUES(2, 'Completed');
INSERT INTO lemondb.transactionstates (stateid, text) VALUES(3, 'Cancelled');
#Insert default provider
INSERT INTO lemondb.providers (id,name,address,phone,cellphone) VALUES(1,'Default Provider', '-NA-', '-NA-', '-NA-');