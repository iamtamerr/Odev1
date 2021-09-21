# İlk Soru

  SELECT COUNT(*) FROM film
  WHERE length > (SELECT AVG(length) FROM film)
  
# İkinci Soru

  SELECT COUNT(*) FROM film
  WHERE rental_rate = (SELECT MAX(rental_rate) FROM film)
  
# Üçüncü Soru

  SELECT * FROM film
  WHERE 
  rental_rate = (SELECT MIN(rental_rate) FROM film) AND
  replacement_cost = (SELECT MIN(replacement_cost ) FROM film);

# Dördüncü Soru

  SELECT first_name, last_name FROM payment
  INNER JOIN customer
  ON customer.customer_id = payment.customer_id
  WHERE amount = (SELECT MAX(amount) FROM payment)
