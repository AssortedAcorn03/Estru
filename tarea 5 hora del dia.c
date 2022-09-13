#include <stdio.h>

int main()
{
int hora,minuto;
printf("dame la hora del dia : ");
scanf("%d",&hora);
printf("dame el minuto de la hora : ");
scanf("%d",&hora);

 if(hora>00 && hora <11 )
 {
   printf("buenos dias \n");
 }else{
 if(hora>12 && hora <17 )
 {
   printf("buenas tardes \n");
 }else{
 if(hora>=18 && hora <23 )
 {
   printf("buenas noches \n");
 }else{
 printf("la hora no es valida \n");
 }
 }
 }
 }



