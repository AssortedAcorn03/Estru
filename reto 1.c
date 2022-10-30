#include <stdio.h>
#define N 5
int mezclaArr(int arr1[],int val);
void muestraDatos(int arr[]);

int main()
{
int arr1[N] ={1,2,4};
int val,pos;
printf("dame el valor que se acomode ");
scanf("%d",&val);
pos=mezclaArr(arr1,val);
printf("el valor se ubicaria en la posicion %d ",pos);

}

int mezclaArr(int arrA[N],int val)
{
int i,resp=0;
for(i=0;i<N;i++)
{

if(arrA[i]>=val)
resp=i;
}
return(resp);
}


void muestraDatos(int arr[N])
{
    int i;
    for(i = 0; i <N; i++)
        printf("%3d", arr[i]);
    printf("\n");
}
