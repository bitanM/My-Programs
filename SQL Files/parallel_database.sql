/* Parallel Database. Create one primary table and 2 secondary tables based on the primary table.
Implement a trigger to populate secondary tables when data is inserted into primary table.
Implement a trigger to update all tables when data is updated in primary table. */
create table table_site1
(
 collegeID int not null,
 collegeName varchar(20) not null,
 Department varchar(10) not null,
 vacancy int,
 constraint college_pk primary key (collegeID)
);
create table table_site2
(
 collegeID int not null,
 collegeName varchar(20),
 Department varchar(10),
 vacancy int,
 constraint fk_site1 foreign key (collegeID)
 references table_site1 (collegeID) on delete cascade
);
create table table_site3
(
 collegeID int,
 collegeName varchar(20),
 Department varchar(10),
 vacancy int,
 constraint fk_site1_2 foreign key (collegeID)
 references table_site1 (collegeID) on delete cascade
);
DELIMITER //

CREATE TRIGGER trigger_updatetable
AFTER UPDATE ON table_site1
FOR EACH ROW
BEGIN
  UPDATE table_site2 a
  SET a.vacancy = a.vacancy - 1
  WHERE a.collegeName = OLD.collegeName AND a.Department = OLD.Department;

  UPDATE table_site3 b
  SET b.vacancy = b.vacancy - 1
  WHERE b.collegeName = OLD.collegeName AND b.Department = OLD.Department;
END;


create trigger trigger_inserttable
after insert on table_site1
for each row
begin
 insert into table_site2 (collegeID, collegeName, Department, vacancy) values
 (new.collegeID, new.collegeName, new.Department, new.vacancy);

 insert into table_site3 (collegeID, collegeName, Department, vacancy) values
  (new.collegeID, new.collegeName, new.Department, new.vacancy);
end;

//
DELIMITER 

insert into table_site1 (collegeID, collegeName, Department, vacancy)
values
(1, 'Engg College 1', 'CSE', 30),
(2, 'Engg College 2', 'CSE', 30),
(3, 'Engg College 3', 'ECE', 30),
(4, 'Engg College 4', 'ECE', 30),
(5, 'Engg College 5', 'ME', 30),
(6, 'Engg College 2', 'ME', 30);

select * from table_site1;
select * from table_site2;
select * from table_site3;

update table_site1 set vacancy = vacancy-1
where collegeName = 'Engg College 2' and Department = 'CSE';

select /*+ parallel */ * from table_site2 where collegeName = 'Engg College 2';
select /*+ parallel */ sum(vacancy) from table_site1 where Department ='CSE';
select /*+ parallel */ distinct collegeName from table_site1;
select /*+ parallel */ distinct Department from table_site1;
