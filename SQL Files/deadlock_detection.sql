/* Deadlock Detection. Create a database and a table. Open two windows. In the first window start and update an attribute.
In the second window attempt to view the same table. Observe the error. Commit in first window; execute update without start.*/
create database transaction;
use transaction;
create table bank
(
 accNo int,
 name varchar(20),
 balance decimal(10, 2)
);
insert into bank (accNo, name, balance) values
(101, 'Krish', 2550.00),
(102, 'Padma', 1000.00),
(103, 'Kavitha', 1700.00);

-- Window 1 --
use transaction;
select * from bank;
start transaction;
update bank set balance = balance + 50 where accNo = 101;

-- Window 2 --
use transaction;
select * from bank;
update bank set balance = balance + 100 where accNo = 102;

-- Window 1 --
commit;

-- Window 2 --
select * from bank;
update bank set balance = balance + 100 where accNo = 101;
update bank set balance = balance + 100 where accNo = 102;

-- Window 1 --
select * from bank;