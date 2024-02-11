# Write your MySQL query statement below
select name as Customers from customers
where id NOT IN (select distinct customerId from Orders);