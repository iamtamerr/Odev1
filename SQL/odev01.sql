# İlk Soru

  SELECT title,description FROM film;
  
# İkinci Soru

  SELECT * FROM film
  WHERE length > 60 AND length < 75;
  
# Üçüncü Soru

  SELECT * FROM film
  WHERE rental_rate = 0.99 AND replacement_cost = 12.99 OR Replacement_cost = 28.99;

# Dördüncü Soru

  SELECT last_name FROM customer
  WHERE first_name = 'Mary';
  Cevap : Smith

# Beşinci Soru

  SELECT * FROM film
  WHERE NOT length > 50 AND (NOT (rental_rate = 2.99 OR rental_rate = 4.99));
