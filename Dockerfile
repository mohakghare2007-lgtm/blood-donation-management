FROM php:8.2-apache

RUN apt-get update \
    && apt-get install -y g++ \
    && rm -rf /var/lib/apt/lists/*

COPY index.php /var/www/html/
COPY ds_simple_proj.cpp /var/www/html/

WORKDIR /var/www/html

RUN g++ ds_simple_proj.cpp -o ds_simple_proj

RUN chmod +x ds_simple_proj

RUN sed -i 's/Listen 80/Listen 10000/' /etc/apache2/ports.conf

RUN sed -i 's/<VirtualHost \*:80>/<VirtualHost *:10000>/' /etc/apache2/sites-available/000-default.conf

EXPOSE 10000

CMD ["apache2-foreground"]