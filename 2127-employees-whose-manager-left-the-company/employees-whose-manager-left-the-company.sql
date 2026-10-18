# Write your MySQL query statement below
select employee_id from Employees 
where salary < 30000 AND manager_id not IN(select employee_id from employees) order by employee_id;