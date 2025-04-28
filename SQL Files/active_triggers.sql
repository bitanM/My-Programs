/* Active Database using Trigger.
Create 3 tables. Implement triggers to synchronize 2 tables.
Perform simulation. */
create table customeracc
(
 name varchar(25),
 accno number(10),
 balance number(10),
 loanamount number(10)
);
insert into customeracc (name, accno, balance, loanamount) values
('Alex', 711201, 30000, 2000),
('Bob', 112314, 55000, 0);
select * from customeracc;
create table bankacc
(
 name varchar(25),
 accno number(10),
 balance number(10),
 loanamount number(10)
);
insert into bankacc (name, accno, balance, loanamount) values
('Alex', 711201, 30000, 2000),
('Bob', 112314, 55000, 0);
select * from bankacc;
create table loanacc
(
 name varchar(25),
 accno number(10),
 balance number(10),
 loanamount number(10),
 dueno number(10),
 dueamount number(10)
);
insert into loanacc values ('Alex', 711201, 30000, 2000, 2, 250);
select * from loanacc;
create or replace trigger update_trigger
before update of balance on customeracc
for each row
begin
 update bankacc
 set balance = :new.balance where accno = :new.accno;
 update loanacc
 set balance = :new.balance where accno = :new.accno;
end;
/
update customeracc set balance = balance + &depositamt where accno = 711201;
select * from customeracc;
select * from bankacc;
select * from loanacc;
create or replace trigger update_trigger2
before update of loanamount on loanacc
for each row
begin
 update customeracc
 set loanamount = :new.loanamount where accno = :new.accno;
 update bankacc
 set loanamount = :new.loanamount where accno = :new.accno;
end;
/
update loanacc set loanamount = loanamount + &issueamt
where accno = 711201;
select * from loanacc;
select * from customeracc;
select * from bankacc;
