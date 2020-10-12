// DB SYSTEMS CHAPTER 7

1.
       
select first_name + ' ' + last_name AS customer,
count(rental_id) AS Rentals,
sum(amount) AS Total_Amount from customer INNER JOIN payment
ON customer.customer_id = payment.customer_id
GROUP BY customer.first_name, customer.last_name
ORDER BY total_amount desc
LIMIT 10;

2.

select inventory_id as Inventory_ID,film_id as Film_ID,
title as Film_Title, store_id as Store_ID,
address as Store_Location
from film INNER JOIN inventory ON
film.film_id = inventory.film_id
INNER JOIN store ON
inventory.store_id = store.store_id
INNER JOIN rental ON
inventory.inventory_id = rental.inventory_id
where inventory.inventory_id NOT IN(rental.inventory_id);


3.

with t1 as (select *, date_part( ‘day’, nullif(return_date,'00-00-0000') - rental_date) as date_difference
t2 as (select rental_duration, date_difference,
       case 
           when rental_duration >= date_difference then ‘returned on time’  
           when rental_duration < date_difference then ‘returned late’
           when date_difference < 0 then ‘not returned’
       end as return_status
   from film f , inventory i , t1
where f.film_id = i.film_id and t1.inventory_id = i.inventory_id

select return_status, count(*) as total_number_of_films from the second with clause select the retunr status and count(*) to get total number of films for each type of return status
from t2
group by return_status;

4.

select film.title , film.inventory_id , count(*) from 
film, inventory, rental
where film.film_id = inventory.film_id 
and inventory.inventory_id = rental.inventory_id 
group by film.title , film.inventory_id
having count(*) > 30 
order by count(*) desc
