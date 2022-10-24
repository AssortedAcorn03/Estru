#include <stdio.h>
#define N 10


void quickSort(int arr[], int n);
void qSort(int arr[], int izq, int der);
void llenarArr(int arr[], int num, int rango);
void muestraDatos(int arr[], int n);
void swap(int *izq,int*der);


int main()
{
int arr[N]={10, 9, 8, 7, 6, 5, 4, 3, 1, 0};
  //llenarArr(arr,N,(100));
  muestraDatos(arr,N);
  quickSort(arr, N);
  printf("\n");
  muestraDatos(arr,N);

}

void quickSort(int arr[], int n)
{
    qSort(arr, 0, n-1);
}

void qSort(int arr[], int izq, int der)
{
    int i = izq, d = der, piv;

    piv = arr[(i + d)/2];
    while(i <= d)
    {
        while(arr[i] < piv) i ++;
        while(arr[d] > piv) d --;
        if(i <= d)
        {
            swap(&arr[i], &arr[d]);
            i ++;
            d --;
        }
    }
    if(izq < d)
        qSort(arr, izq, d);
    if(i < der)
        qSort(arr, i, der);
}

void swap(int *izq,int*der)
{
int aux;
aux=*izq;
*izq=*der;
*der=aux;
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

