/* Demonstration of Distributed database. Here 3 databases are created. Each has same set of 3 tables. Demonstration includes Calculating the values of a column using SUM(); Updating a record using UPDATE(); Combining data using UNION;*/

create database site1;
use site1;
create table books
(
 ISBN int,
 Author varchar(10),
 Topic varchar(30),
 TotalStock int,
 Price int
);
 insert into site1.books (ISBN, Author, Topic, TotalStock, Price) values
(1001, 'Tatenbum', 'Database Systems', 20, 200),
(1002, 'Sudarshan', 'Advanced DBMS', 30, 500),
(1003, 'Korth', 'Concepts of DBMS', 40, 600),
(1004, 'Navathe', 'Fundamental DBMS', 50, 650);
create table BookStore
(
 Storeno int,
 City varchar(25),
 State varchar(25),
 ZipCode int,
 InventoryValue int
);
insert into site1.BookStore (Storeno, City, State, ZipCode, InventoryValue) values
(1, 'Nagpur', 'Maharashtra', 442001, 1234),
(2, 'Trichy', 'Tamil Nadu', 620001, 3456),
(3, 'Hyderabad', 'Telangana', 246002, 4567),
(4, 'Bangalore', 'Karnataka', 439106, 5678);
create table Stock
(
 Storeno int,
 ISBN int,
 Qty int
);
insert into site1.Stock (Storeno, ISBN, Qty) values
(1, 1004, 45),
(2, 1002, 25),
(3, 1001, 15),
(4, 1003, 32);
select * from site1.books;
select * from site1.BookStore;
select * from site1.Stock;
create database site2;
use site2;
create table books
(
 ISBN int,
 Author varchar(10),
 Topic varchar(30),
 TotalStock int,
 Price int
);
insert into site2.books (ISBN, Author, Topic, TotalStock, Price) values
(1021, 'Mukesh', 'Operating System', 40, 200),
(1022, 'Andrew', 'OS Concepts', 30, 250),
(1023, 'Abraham', 'Programming Languages', 50, 300),
(1024, 'Rosen', 'Discrete Math', 60, 550);
create table BookStore
(
 Storeno int,
 City varchar(25),
 State varchar(25),
 ZipCode int,
 InventoryValue int
);
insert into site2.BookStore (Storeno, City, State, ZipCode, InventoryValue) values
(11, 'Chennai', 'TN', 620020, 1234),
(12, 'Vizag', 'AP', 520030, 2345),
(13, 'Indore', 'MP', 842060, 3456),
(14, 'Jaipur', 'Rajasthan', 532100, 4567);
create table Stock
(
 Storeno int,
 ISBN int,
 Qty int
);
insert into site2.Stock (Storeno, ISBN, Qty) values
(11, 1024, 45),
(12, 1021, 25),
(13, 1022, 18),
(14, 1023, 20);
select * from site2.books;
select * from site2.BookStore;
select * from site2.Stock;
create database site3;
use site3;
create table books
(
 ISBN int,
 Author varchar(10),
 Topic varchar(30),
 TotalStock int,
 Price int
);
insert into site3.books (ISBN, Author, Topic, TotalStock, Price) values
(1031, 'William', 'Network Security', 30, 200),
(1032, 'Kumar', 'Cloud Computing', 40, 350),
(1033, 'Sebesta', 'Random Process', 35, 600),
(1034, 'Krunal', 'Probability', 20, 660);
create table BookStore
(
 Storeno int,
 City varchar(25),
 State varchar(25),
 ZipCode int,
 InventoryValue int
);
insert into site3.BookStore (Storeno, City, State, ZipCode, InventoryValue) values
(21, 'Chennai', 'TN', 620020, 1234),
(22, 'Trichy', 'TN', 620015, 2345),
(23, 'Bhopal', 'MP', 320902, 3456),
(24, 'Bangalore', 'Karnataka', 590306, 4567);
create table Stock
(
 Storeno int,
 ISBN int,
 Qty int
);
insert into site3.Stock (Storeno, ISBN, Qty) values
(21, 1031, 25),
(22, 1032, 38),
(23, 1033, 32),
(24, 1034, 12);
select * from site3.books;
select * from site3.BookStore;
select * from site3.Stock;
select sum(Qty) from site3.Stock;
select sum(Qty) from site2.Stock;
select sum(Qty) from site1.Stock;
update site2.books set Price = '700' where ISBN = '1024';
select * from site1.Stock union select * from site2.Stock union select * from site3.Stock;