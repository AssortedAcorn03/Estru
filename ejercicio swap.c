#include <stdio.h>

int main()
{
int num1,num2,num3,aux;
printf("dame el primer numero \n");
scanf("%d",&num1);
printf("dame el segundo numero \n");
scanf("%d",&num2);
printf("dame el tercer numero \n");
scanf("%d",&num3);
if(num1>num2)
{
aux=num2;
num2=num1;
num1=aux;
}
if(num1>num3)
{
aux=num3;
num3=num1;
num1=aux;
}
if(num2>num3)
{
aux=num3;
num3=num2;
num2=aux;
}

 printf("Sin direcciones: %d - %d - %d \n", num1, num2, num3);
}
