#include <stdio.h>

int main()
{
float precio,precioF,precioF2;

int descuento;

printf("cual es el precio del articulo ");
scanf("%f",&precio);
printf("cual es el descuento");
scanf("%d",&descuento);
precioF=(descuento*precio)/100;
precioF2=precio-precioF;
printf("el precio final es %f ",precioF2);
}
