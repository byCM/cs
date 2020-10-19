// DB SYSTEMS CHAPTER 7

1.
       
select CONCAT_WS(" ", first_name, last_name) AS Customer,
count(rental_id) AS Rentals,
sum(amount) AS Total_Amount from customer INNER JOIN payment
ON customer.customer_id = payment.customer_id
GROUP BY first_name, last_name
ORDER BY total_amount desc
LIMIT 10;

2.

SELECT inventory.inventory_id AS Inventory_ID, film.film_id AS Film_ID,
title AS Film_Title, store.store_id AS Store_ID, store.store_id AS Store_Location

FROM film INNER JOIN inventory ON
film.film_id = inventory.film_id
INNER JOIN store ON
inventory.store_id = store.store_id
INNER JOIN rental ON
inventory.inventory_id = rental.inventory_id
WHERE inventory.inventory_id NOT IN(rental.inventory_id);


3.
       
       /*CTE*/
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

select film.title , film.film_id , count(*) from
film, inventory, rental
where film.film_id = inventory.film_id
and inventory.inventory_id = rental.inventory_id
group by film.title , film.film_id
having count(*) > 30
order by count(*) desc

SELECT
    film.title,
    film.film_id,
    COUNT(*)
FROM
    film,
    inventory,
    rental
WHERE
    film.film_id = inventory.film_id AND inventory.inventory_id = rental.inventory_id
GROUP BY
    film.title,
    film.film_id
HAVING
    COUNT(*) > 30
ORDER BY
    COUNT(*)
DESC
    

5.

6.
SELECT
    actor.actor_id AS Actor_ID,
    CONCAT_WS(
        " ",
        actor.first_name,
        actor.last_name
    ) AS Actor,
    COUNT(actor_id) AS Total_films,
    SUM(amount) AS Total_Films
FROM
    actor_id
INNER JOIN film_actor FROM inventory,
    actor,
    film
WHERE
    sharks,
    crocodiles IN(
    SELECT
        actor_id,
        first_name,a
        last_name,
    ORDER BY
        rental_amount
