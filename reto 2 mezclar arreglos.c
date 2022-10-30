#include <stdio.h>
#define N 3
#define M 4
#define H M+N
void mezclaArr(int arr1[],int arr2[],int arr3[]);
void muestraDatos(int arr[]);

int main()
{
int arr1[N] ={1,2,};
int arr2[M] ={2,4,5,6};
int arr3[H];
mezclaArr(arr1,arr2,arr3);
muestraDatos(arr3);
}

void mezclaArr(int arrA[N],int arrB[M],int arrC[H])
{
int i;
if(arrA[i]<=arrB[i])
    arrC[i]=arrA[i];
    else
    arrC[i]=arrB[i];
}


void muestraDatos(int arr[H])
{
    int i;
    for(i = 0; i <H; i++)
        printf("%3d", arr[i]);
    printf("\n");
}
