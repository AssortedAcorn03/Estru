int main()
{
int dias,horas,minutos,D,H,M,total,segundos;

printf("cuanto segundos ");
scanf("%d",&segundos);


D=segundos /86400;
H=segundos /3600;
M=segundos /60;
printf("%d dias, %d horas,%d minutos ",D,H,M);
}
