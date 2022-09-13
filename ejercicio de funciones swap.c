#include <stdio.h>
void ordenarValores(int *a,int *b,int *c,int *d);

int main()
{
int num1,num2,num3,num4;

printf("dame el primer numero \n");
scanf("%d",&num1);
printf("dame el segundo numero \n");
scanf("%d",&num2);
printf("dame el tercer numero \n");
scanf("%d",&num3);
printf("dame el tercer numero \n");
scanf("%d",&num4);
ordenarValores(&num1,&num2,&num3,&num4);
printf("Sin direcciones: %d - %d - %d -%d\n", num1, num2, num3,num4);
}

void ordenarValores(int *a,int *b,int *c,int *d)
{
int aux;
if(*a>*b)
{
aux=*b;
*b=*a;
*a=aux;
}
if(*a>*c)
{
aux=*c;
*c=*a;
*a=aux;
}
if(*b>*c)
{
aux=*c;
*c=*b;
*b=aux;
}
if(*c>*d)
{
aux=*d;
*d=*c;
*c=aux;
}
}
