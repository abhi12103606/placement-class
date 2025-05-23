# Write your MySQL query statement below
select customer_id, COUNT(v.visit_id) as count_no_trans
from Visits v
Left join Transactions t
on v.visit_id = t.visit_id
where t.transaction_id is NULL
group by v.customer_id;