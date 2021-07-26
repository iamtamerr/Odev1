# Birinci Soru
  SELECT AVG(rental_rate) FROM film;

# İkinci Soru
  SELECT COUNT(*) FROM film
  WHERE title LIKE 'C%';
  
# Üçüncü Soru
  SELECT MAX(length) FROM film
  WHERE rental_rate = 0.99;

# Dördüncü Soru
  SELECT COUNT(DISTINCT replacement_cost) FROM film
  WHERE length > 150;

