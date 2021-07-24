# Birinci Soru
  SELECT * FROM country
  WHERE country LIKE 'A%a';
  
# İkinci Soru
  SELECT * FROM country
  WHERE country LIKE 'A%%%%n';
  
# Üçüncü Soru
  SELECT * FROM film
  WHERE title ILIKE '%T%T%T%T%';
  
# Dördüncü Soru
  SELECT * FROM film
  WHERE title LIKE 'C%' AND length > 90 AND rental_rate = 2.99;
