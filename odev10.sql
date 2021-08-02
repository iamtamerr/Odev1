# Birinci Soru
  SELECT country, city FROM city
  LEFT JOIN country
  ON city.country_id = country.country_id;
  
# İkinci Soru
  SELECT payment_id, first_name, last_name FROM customer
  RIGHT JOIN payment
  ON customer.customer_id = payment.customer_id;
  
# Üçüncü Soru
  SELECT rental_id, first_name, last_name FROM customer
  FULL JOIN rental
  ON customer.customer_id = rental.customer_id;
