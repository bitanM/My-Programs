/* Parallel Join and Parallel Sort.
Create 2 different tables. Perform parallel scan operation on both the tables. 
Execute Full Outer join between the tables in parallel. Apply parallel sort on the joined result by an attribute. */
create table university
(
 collegecode int,
 collegename varchar(30),
 city varchar(20)
);
create table stu1
(
 collegename varchar(30),
 sturollno int,
 stuname varchar(30),
 department varchar(20),
 cgpa int,
 ranks int
);
insert into university (collegecode, collegename, city) values
(11, 'College 1', 'City A'),
(22, 'College 2', 'City B'),
(33, 'College 3', 'City C'),
(44, 'College 4', 'City D');
select * /*+ parallel */ from university;
insert into stu1 (collegename, sturollno, stuname, department, cgpa,
ranks) values
('College 1', 111, 'Mala', 'CSE', 8.8, 3),
('College 2', 222, 'Sara', 'CSE', 8.4, 4),
('College 3', 333, 'Sindhu', 'CSE', 9.0, 1),
('College 4', 444, 'Sheela', 'CSE', 8.9, 2);
select * /*+ parallel */ from stu1;
select /*+ parallel */ university.collegename, stu1.sturollno,
stu1.stuname, stu1.cgpa, stu1.ranks from university
left outer join stu1 on university.collegename = stu1.collegename
union
select /*+ parallel */ university.collegename, stu1.sturollno,
stu1.stuname, stu1.cgpa, stu1.ranks from university
right outer join stu1 on university.collegename = stu1.collegename
order by stu1.ranks;
