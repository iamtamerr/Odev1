# Birinci Soru
  SELECT * FROM film
  WHERE title LIKE '%n'
  ORDER BY length DESC
  OFFSET 5
  LIMIT 5;

# İkinci Soru
  SELECT * FROM film
  WHERE title LIKE '%n'
  ORDER BY length
  OFFSET 5
  LIMIT 5;
  
# Üçüncü Soru
  SELECT * FROM customer
  WHERE store_id = 1
  ORDER BY last_name DESC
  LIMIT 4;
