/* Deductive database. */
create database kinship;
use kinship;
create table family
(
 person_id int primary key auto_increment,
 name varchar(30) not null,
 gender enum('Male', 'Female') not null,
 parent_id int null,
 foreign key (parent_id) references family(person_id)
 on delete set null
);
insert into family (name, gender, parent_id) values
('John', 'Male', null),
('Mary', 'Female', null),
('Alice', 'Female', 1),
('Bob', 'Male', 1), 
('Eve', 'Female', 1), 
('Charlie', 'Male', 3),
('David', 'Male', 3); 
select * from family;
select name from family where parent_id = (select person_id from family where name = 'John');
select f1.name as child, f2.name as parent from
family f1 join family f2 on f1.parent_id = f2.person_id
where f1.name = 'Alice';
select f2.name as grandchild from family f1 join family f2
on f1.person_id = f2.parent_id where f1.parent_id =
(select person_id from family where name = 'John');
select f1.name as sibling1, f2.name as sibling2 from
family f1 join family f2 on f1.parent_id = f2.parent_id
where f1.name = 'Alice' and f1.name <> f2.name;

