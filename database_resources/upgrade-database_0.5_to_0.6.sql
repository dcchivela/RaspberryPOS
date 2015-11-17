# (C) 2009 Miguel Chavez Gamboa.
# This script is to upgrade your existing database from 0.5 to 0.6 version of lemon POS.
#
# Run this as: cat upgrade-database.sql | mysql -u root -p

USE lemondb;

#Add terminalnum flied to balances
alter table balances add terminalnum bigint(20) unsigned NOT NULL after transactions;

#Create new tables for storing type-strings used in transactions.

CREATE TABLE `paytypes` (
  `typeid` int(10) unsigned NOT NULL auto_increment,
  `text` varchar(50) character set utf8 collate utf8_spanish2_ci NOT NULL,
  PRIMARY KEY  (`typeid`)
) ENGINE=MyISAM AUTO_INCREMENT=1 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE `transactionstates` (
  `stateid` int(10) unsigned NOT NULL auto_increment,
  `text` varchar(50) character set utf8 collate utf8_spanish2_ci NOT NULL,
  PRIMARY KEY  (`stateid`)
) ENGINE=MyISAM AUTO_INCREMENT=1 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

CREATE TABLE `transactiontypes` (
  `ttypeid` int(10) unsigned NOT NULL auto_increment,
  `text` varchar(50) character set utf8 collate utf8_spanish2_ci NOT NULL,
  PRIMARY KEY  (`ttypeid`)
) ENGINE=MyISAM AUTO_INCREMENT=1 DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

##You may change the string values for the next fields

#Insert default payment types (very important to keep these ids)
INSERT INTO lemondb.paytypes (typeid, text) VALUES(1, 'Cash');
INSERT INTO lemondb.paytypes (typeid, text) VALUES(2, 'Card');

#Insert default transactions states (very important to keep these ids)
INSERT INTO lemondb.transactionstates (stateid, text) VALUES(1, 'Not Completed');
INSERT INTO lemondb.transactionstates (stateid, text) VALUES(2, 'Completed');
INSERT INTO lemondb.transactionstates (stateid, text) VALUES(3, 'Cancelled');

#Insert default transactions types (very important to keep these ids)
INSERT INTO lemondb.transactiontypes (ttypeid, text) VALUES(1, 'Sell');
INSERT INTO lemondb.transactiontypes (ttypeid, text) VALUES(2, 'Purchase');
INSERT INTO lemondb.transactiontypes (ttypeid, text) VALUES(3, 'Change');
INSERT INTO lemondb.transactiontypes (ttypeid, text) VALUES(4, 'Return');