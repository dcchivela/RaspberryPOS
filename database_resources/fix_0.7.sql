# (C) 2007-2009, Miguel Chavez Gamboa
# This is to fix the disappearing new products on squeeze.
# Run only for 0.7 database version.
#
# Run this as: cat fix_0.7.sql | mysql -u root -p

USE lemondb;

#Insert default provider
INSERT INTO lemondb.providers (id,name,address,phone,cellphone) VALUES(1,'Default Provider', '-NA-', '-NA-', '-NA-');

#Add qty for lots table
alter table lots add `qty` int(10) unsigned NOT NULL after expirationdate;