# Write your MySQL query statement below
select e.name as Employee
from employee e, employee a
where e.managerid = a.id
and e.salary > a.salary;