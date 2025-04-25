# Write your MySQL query statement below
select firstname, lastname, city, state from person
LEFT JOIN address on person.personid =address.personid;