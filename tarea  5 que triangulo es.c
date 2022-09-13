#include <stdio.h>

int main()
{
int ladoA,ladoB,ladoC;
printf("cual es el valor de lado A ");
scanf("%d",&ladoA);
printf("cual es el valor de lado B ");
scanf("%d",&ladoB);
printf("cual es el valor de lado C ");
scanf("%d",&ladoC);

if(ladoA==ladoB && ladoB== ladoC && ladoC==ladoA)
 {

   printf("se trata de un triangulo equilatero \n");
 }else{
 if(ladoA==ladoB && ladoC!=ladoA)
 {

   printf("se trata de un triangulo isoceles  \n");
 }else{
 if(ladoC==ladoA && ladoB!=ladoA)
 {

   printf("se trata de un triangulo isoceles  \n");
 }else{
 if(ladoA!=ladoB && ladoB!=ladoC&& ladoC!=ladoA)
 {

   printf("se trata de un triangulo escaleno  \n");
 }else{



}
}
}
}
}


