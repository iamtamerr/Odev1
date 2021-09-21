# Birinci Soru
  SELECT city, country FROM country
  INNER JOIN city
  ON country.country_id = city.country_id

# İkinci Soru
  SELECT first_name, last_name, payment_id FROM customer
  INNER JOIN payment 
  ON customer.customer_id = payment.customer_id
  
# Üçüncü Soru
  SELECT first_name, last_name, rental_id FROM customer
  INNER JOIN rental 
  ON customer.customer_id = rental.customer_id
