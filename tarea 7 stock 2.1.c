#include <stdio.h>
#include <math.h>
#define NART 2
int claveMas(int clave[15],int arr[]);
 void llenarArrCl(int arr[]);
 void llenarArrPre(int arr[]);
 void llenarArrSto(int arr[]);


int main()
{
int arrPrecio[NART];
int arrStock[NART];
int clave[NART];
int clav,cad,ventas;
llenarArrCl(clave);
llenarArrPre(arrPrecio);
llenarArrSto(arrStock);
clav=claveMas(clave,arrPrecio);
printf("el producto de mayor precio tiene la clave  %d",clav);
cad=claveMas3(clave,arrStock);
ventas=claveMas2(arrPrecio,arrStock);
printf("producto con menor stock clave %d \n",cad);
printf("total de venta esperada es de %d \n ",ventas);
}


int claveMas3(int clave[NART], int arr[NART])
{
 int i,j,menor=0;
 for(i=0;i<NART;i++)
 {
        if(arr[i]<=menor)
          menor=arr[i];
          j=i;

 }
 return(clave[j]);
}



int claveMas(int clave[NART], int arr[NART])
{
 int i,j,mayor=0;
 for(i=0;i<NART;i++)
 {
        if(arr[i]>mayor)
          mayor=arr[i];
          j=i;

 }
 return(clave[j]);
}


    void llenarArrCl(int arr[])
    {

    int i;
    for(i=0;i<NART;i++)
    {
    printf("cual es la clave del articulo \n");
    scanf("%d",&arr[i]);
    }
    }

void llenarArrPre(int arr[])
{

int i;
for(i=0;i<NART;i++)
{
printf("cual es el precio del articulo \n");
scanf("%d",&arr[i]);
}
}

void llenarArrSto(int arr[])
{

int i;
for(i=0;i<NART;i++)
{
printf("cual es el valor del stock en bodega del articulo \n");
scanf("%d",&arr[i]);
}
}



int claveMas2( int arr[NART],int arr2[NART])
{
 int i,j,l,suma=0,sumaTot=0;
 for(i=0;i<NART;i++)
 {
     l=arr2[i];
        for(j=0;j<l;j++)
        {

            suma+=arr[i];
        }
       sumaTot+=suma;
 }

 return(sumaTot);
}

