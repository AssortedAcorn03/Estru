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
int num,codigo,i,bus;
llenarArr(arr,N,100);
muestraDatos(arr,N);
printf("¿que numero se quiere encontrar? ");
scanf("%d",&bus);
for(i=0;i<N;i++)
codigo=busqBinaria(arr,N,bus);
//codigo=busquedaBinRec(arr,N,bus);

if(codigo==1){
      printf("el numero buscado si se encuentra en el arreglo y contiene el numero ",codigo);
 } else{
      printf("el numero buscado no se encuentra en el arreglo ");

}
}



 int busqBinaria(int arr[], int n, int buscado)
{
    int izq = 0, der = n-1, med, codigo = 0;
    do{
        med = (izq+der)/2;
        if(buscado==arr[med])
            codigo = 1;
        else
            if(buscado<arr[med])
                der = med-1;
            else
                izq = med+1;
    } while(codigo==0 && izq <= der);

    return (codigo);
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

    for(i = 0; i < n; i++)
        arr[i] = rand()%rango;
}

int busqBinRec(int arr[], int izq, int der, int buscado)
{
    int codigo, med;
    if(izq>der)
        codigo = 0;
    else
    {
        med = (izq+der)/2;
        if(buscado==arr[med])
            codigo = 1;
        else
            if(buscado < arr[med])
                codigo = busqBinRec(arr,izq, med-1,buscado);
            else
                codigo = busqBinRec(arr,med+1,der,buscado);
    }
    return (codigo);
}
