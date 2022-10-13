#include <stdio.h>
#define size 11
void swap(int *valor1, int *valor2);
void burbuja(int arr[size]);
void imprimeArr(int arr[size]);
void llenarArr(int arr[],int n,int rango);


int main()
{
int arr[size]={10,9,8,7,6,5,4,3,2,1,0};
//llenarArr(arr,size,10);
imprimeArr(arr);
burbuja(arr);
printf(" /////// \n");
imprimeArr(arr);

}

void burbuja(int arr[size])
{
int i,j;
for(i=size-1;i>0;i--)
    for(j=0;j<i;j++)
    if(arr[j]>arr[j+1])
      swap(&arr[j],&arr[j+1]);
}

void swap(int *valor1, int *valor2)
{
int aux;
aux=*valor1;
*valor1=*valor2;
*valor2=aux;
}

void imprimeArr(int arr[size])
{
    int i;
    for(i=0;i<size;i++)
        printf("%d",arr[i]);
}


void llenarArr(int arr[], int n, int rango)
{
    int i;

    for(i = 0; i < n; i++)
        arr[i] = rand()%rango;
}
