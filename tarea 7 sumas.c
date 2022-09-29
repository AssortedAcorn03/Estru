#include <stdio.h>
#include <math.h>
#define NMAX 4


int sumaMen(int arr[NMAX],int *j);
int sumaPar(int arr[NMAX]);
int sumaImpar(int arr[NMAX]);
void pideArr(int arr[NMAX]);

int main()
{
int sumaP,sumaI,sumaM,n;
int arr[NMAX];
pideArr(arr);
sumaP=sumaPar(arr);
sumaI=sumaImpar(arr);
sumaM=sumaMen(arr,&n);
printf("la suma de los numeros en posiciones par es de %d \n",sumaP);
printf("la suma de los numeros en posiciones inpar es de %d \n",sumaI);
printf("la suma cuando es menor a 100 es de %d y se detiene en la posicion %d \n",sumaM,n);
}

void pideArr(int arr[NMAX])
{
int i;
for(i=0;i<NMAX;i++)
{
    printf("dame el nunero para la posicion %d \n",i);
    scanf("%d",&arr[i]);
}
}

int sumaPar(int arr[NMAX])
{
int i,suma=0;
for(i=0;i<NMAX;i++)
{
  if(i%2==0)
    suma+=arr[i];

}
return(suma);
}

int sumaImpar(int arr[NMAX])
{
int i,suma=0;
for(i=0;i<NMAX;i++)
{
  if(i%2!=0)
    suma+=arr[i];

}
return(suma);
}


int sumaMen(int arr[NMAX],int *j)
{
int i,suma=0;

for(i=0;suma<100;i++)
{
    suma+=arr[i];
    *j=i;
}

return(suma);
}
