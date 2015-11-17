#Vistas

CREATE VIEW v_cshipments AS
SELECT shipments.id, shipments."order", shipments.label, shipments.status
   FROM shipments
  WHERE shipments.status = 3
  ORDER BY shipments.id;




CREATE VIEW v_csuborders AS SELECT id,orderid_id,label,status_id,providerid_id FROM sub_orders WHERE status_id=3;

CREATE VIEW v_rsuborders AS SELECT id,orderid_id,label,status_id,providerid_id FROM sub_orders WHERE status_id=4;





SELECT
OI.orderid_id, OI.qty, OI.name, O.clientid_id, O.id,
S.label, S.id, S.orderid_id,
C.id, C.firstname, C.lastname
FROM orders AS O, order_items AS OI, sub_orders AS S, clients AS C
WHERE OI.orderid_id=O.id AND S.orderid_id=O.id AND O.id=2;

SELECT 
OI.orderid_id,OI.qty, OI.name, O.clientid_id, O.id,
S.label,S.id,S.orderid_id,
C.id,C.firstname,C.lastname,C.addr1,C.addr2
FROM orders AS O, order_items AS OI, sub_orders AS S, clients AS C
WHERE OI.orderid_id=O.id AND S.orderid_id=O.id AND OI.orderid_id=S.orderid_id AND O.clientid_id=C.id AND O.id=2;




