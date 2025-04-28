/* Object-oriented database. Create 5 different tables. Table 2 and 3 will inherit from Table 1.
Table 4 and Table 5 will define relationships. 
Execute Join queries to retrieve relationships between tables. */
create database object;
use object;
create table person
(
 person_id int primary key,
 name varchar(30),
 date_of_birth date,
 email varchar(50) unique
);
create table student
(
 person_id int primary key,
 major varchar(30),
 year_of_study int,
 foreign key (person_id) references person(person_id)
);
create table professor
(
 person_id int primary key,
 department varchar(30),
 salary decimal(10, 2),
 foreign key (person_id) references person(person_id)
);
create table course
(
 course_id int primary key,
 course_name varchar(50),
 department varchar(30),
 professor_id int,
 foreign key (professor_id) references professor(person_id)
);
create table enrollment
(
 enrollment_id int primary key,
 student_id int,
 course_id int,
 grade varchar(2),
 foreign key (student_id) references student(person_id),
 foreign key (course_id) references course(course_id)
);
insert into person (person_id, name, date_of_birth, email) values
(1, 'ABC', '1995-05-15', 'abc@email.com'),
(2, 'DEF', '1985-09-10', 'def@example.com');
insert into student (person_id, major, year_of_study) values
(1, 'Computer Science', 2);
insert into professor (person_id, department, salary) values
(2, 'Computer Science', 75000);
insert into course (course_id, course_name, department, professor_id)
values (101, 'Intro to SQL', 'Computer Science', 2);
insert into enrollment (enrollment_id, student_id, course_id, grade)
values (1, 1, 101, 'A');

select p.name as student_name, c.course_name from student s
join enrollment e on s.person_id = e.student_id
join course c on e.course_id = c.course_id
join person p on s.person_id = p.person_id;

select p.name as professor_name, c.course_name from professor pr
join course c on pr.person_id = c.professor_id
join person p on pr.person_id = p.person_id;