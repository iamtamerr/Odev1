# Birinci Soru
  SELECT DISTINCT replacement_cost FROM film;

# İkinci Soru
  SELECT COUNT(DISTINCT replacement_cost) FROM film;

# Üçüncü Soru
SELECT COUNT(*) FROM film
  WHERE title LIKE 'T%' AND rating = 'G';

# Dördüncü Soru
  SELECT COUNT(*) FROM country
  WHERE country LIKE '_____';

# Beşinci Soru
  SELECT COUNT(*) FROM city
  WHERE city ILIKE '%r';
