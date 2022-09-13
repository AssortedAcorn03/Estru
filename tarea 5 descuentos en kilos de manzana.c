#include <stdio.h>

int main()
{
int kilos,descuento;
printf("cuantos kilos compro ");
scanf("%d",&kilos);
if(kilos>0 && kilos <=2)
 {

   printf("no hay descuento \n");
 }else{
if(kilos>=2.01 && kilos <=5)
 {

   printf("se le aplicara un descuento del 10%  \n");
 }else{
 if(kilos>=5.01 && kilos <=15)
 {

   printf("se le aplicara un descuento del 15%  \n");
 }else{
if(kilos>=10.1)
 {

   printf("se le aplicara un descuento del 20%  \n");
 }else{
}
}
}
}
}


