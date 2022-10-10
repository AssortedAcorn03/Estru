#include<stdio.h>

#include <stdlib.h>
#define N 5

void llenarArr(int arr[],int n,int rango);
void muestraDatos(int arr[],int n);
int busquedaSecuencial(int arr[],int n, int buscado);

int main()
{
int arr[N];
int arrb[N];
int duracion,num,codigo,i;
llenarArr(arr,N,100);
muestraDatos(arr,N);
printf("¿que numero se quiere encontrar? ");
scanf("%d",&num);
for(i=0;i<N;i++)
codigo=busquedaSecuencial(arr,N,num);
if(codigo==1)
      printf("el numero buscado si se encuentra en el arreglo y contiene el numero ",codigo);
  else
      printf("el numero buscado no se encuentra en el arreglo ");

}


  int busquedaSecuencial(int arr[],int n,int buscado)
  {
   int i,codigo=0;
  for(i=0;i<n;i++)
   {
    if(buscado==i)
    codigo=1;
     }
  return codigo;
  }


void muestraDatos(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%3d", arr[i]);
    printf("\n");
}


void llenarArr(int arr[], int n, int rango)
{
    int i;
    //srand(time(NULL));
    for(i = 0; i < n; i++)
        arr[i] = rand()%rango;
}

