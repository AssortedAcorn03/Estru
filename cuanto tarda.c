#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000

int busquedaSec(int arr[], int n, int buscado);
int busqSecOrd(int arr[], int n, int buscado);
int busqBinaria(int arr[], int n, int buscado);
int busqBinRec(int arr[], int izq, int der, int buscado);
int busquedaBinRec(int arr[], int n, int buscado);
void quickSort(int arr[], int n);
void qSort(int arr[], int izq, int der);
void swap(int *izq, int *der);
void muestraDatos(int arr[], int n);
void llenarArrAzar(int arr[], int n,int rango);
void muestraBuscado(int arr[], int n, int buscado);

int main()
{
    int arreglo[N];

    srand(time(NULL));
    int INT_MAX;
    int num=10000, bus=rand()%INT_MAX, x,i;

    time_t tPrevio, tPosterior;
    int duracion;

    printf("numero %d\n",bus);
    printf("\\\\\\\\");

    llenarArrAzar(arreglo,num,INT_MAX);
    quickSort(arreglo,num);
    muestraDatos(arreglo,num);

    tPrevio=clock();
    for(i=0; i<num; i++)
    {
       //x=busquedaSec(arreglo,num,bus);
       //x=busqSecOrd(arreglo,num,bus);
       //x=busqBinaria(arreglo,num,bus);
      x=busquedaBinRec(arreglo,num,bus);

    }
    tPosterior=clock();

    duracion = tPosterior - tPrevio;

    if(x==1)
        muestraBuscado(arreglo,num,bus);
    else
        printf("no se encontro\n");

     printf("Me tarde %d milisegundos en bucar el numero %d veces",duracion,num);
}


int busquedaSec(int arr[], int n, int buscado)
{
    int i, codigo = 1;

    for(i=0; i<n && arr[i]!=buscado; i++);
    if(i==n)
        codigo = 0;

    return(codigo);
}

int busqSecOrd(int arr[], int n, int buscado)
{
    int i, codigo=0;
    for(i=0; i<n && buscado>arr[i]; i++);
    if(i<n && buscado==arr[i])
        codigo = 1;
    return (codigo);
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

int busquedaBinRec(int arr[], int n, int buscado)
{
    int codigo;

    codigo=busqBinRec(arr,0,n-1,buscado);

    return(codigo);
}

void quickSort(int arr[], int n)
{
    qSort(arr, 0, n-1);
}

void qSort(int arr[], int izq, int der)
{
    int i=izq, d=der, piv;

    piv=arr[(i + d)/2];
    while(i<=d)
    {
        while(arr[i] < piv) i++;
        while(arr[d] > piv) d--;
        if(i<=d)
        {
            swap(&arr[i],&arr[d]);
            i++;
            d--;
        }
    }
    if(izq<d)
        qSort(arr, izq, d);
    if(i<der)
        qSort(arr, i, der);
}
void swap(int *izq, int *der)
{
    int aux;
    aux  = *izq;
    *izq = *der;
    *der = aux;
}

void muestraDatos(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    printf("\n");
}


void llenarArrAzar(int arr[], int n,int rango)
{
    int i;
    //srand(time(NULL));
    for(i = 0; i < n; i++)
        arr[i] = rand()%rango;
}

void muestraBuscado(int arr[], int n, int buscado)
{
    int i;
    for(i=0; i<n; i++)
        if(arr[i]==buscado)
            printf("la posicion es: %d\n", i);
}
