#include <stdio.h>

int main()
{
int dias,horas,minutos,D,H,M,total;

printf("cuanto dias ");
scanf("%d",&dias);
printf("cuanto horas ");
scanf("%d",&horas);
printf("cuanto minutos ");
scanf("%d",&minutos);

D=dias *86400;
H=horas *3600;
M=minutos *60;
total=D+H+M;
printf("%d dias, %d horas,%d minutos son %d",dias,horas,minutos, total);
}
