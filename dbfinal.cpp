/* DB SYSTEMS CHAPTER 7 - MIchael Ross */

1.

SELECT
    CONCAT_WS(" ", first_name, last_name) AS Customer,
    COUNT(rental_id) AS Rentals,
    SUM(amount) AS Total_Amount
FROM
    customer
INNER JOIN payment ON customer.customer_id = payment.customer_id
GROUP BY
    first_name,
    last_name
ORDER BY
    total_amount
DESC
LIMIT 10;

2.

       /* I dont know why isn't working. */
SELECT
    inventory.inventory_id AS Inventory_ID,
    film.film_id AS Film_ID,
    title AS Film_Title,
    store.store_id AS Store_ID,
    store.store_id AS Store_Location
FROM
    film
INNER JOIN inventory ON film.film_id = inventory.film_id
INNER JOIN store ON inventory.store_id = store.store_id
INNER JOIN rental ON inventory.inventory_id = rental.inventory_id
WHERE
    inventory.inventory_id NOT IN(rental.inventory_id);


3.
       
       /*CTE */
       
       WITH
    t1 AS(
    SELECT
        *,
        date_part(
            ‘day’,
            NULLIF(return_date, '00-00-0000') - rental_date
        ) AS date_difference t2 AS(
        SELECT
            rental_duration,
            date_difference,
            CASE WHEN rental_duration >= date_difference THEN ‘returned
        ON
            time’ WHEN rental_duration < date_difference THEN ‘returned late’ WHEN date_difference < 0 THEN ‘not returned’
    END AS return_status
FROM
    film f,
    inventory i,
    t1
WHERE
    f.film_id = i.film_id AND t1.inventory_id = i.inventory_id
SELECT
    return_status,
    COUNT(*) AS total_number_of_films
FROM
    the SECOND WITH clause
SELECT
    the retunr
STATUS AND
    COUNT(*) TO GET total NUMBER of films FOR EACH TYPE of RETURN
STATUS
FROM
    t2
GROUP BY
    return_status;

4.

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

SELECT
    category.category_ID AS Category_ID,
    category.name AS Category,
    SUM(film.rental_rate) AS Total_Sales,
    SUM(rental.rental_id) AS Rental_Count
FROM
    film,
    inventory,
    rental,
    category
WHERE
    film.film_id = rental.rental_id AND rental.rental_id = category.category_id
GROUP BY
    category.category_id,
    category.name,
    film.rental_rate
ORDER BY
    rental_id
DESC
    


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
