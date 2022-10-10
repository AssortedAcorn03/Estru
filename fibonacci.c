#include<stdio.h>
#include<math.h>

int  Nfibonacci(int n);
void fibonacci(int penultimo, int ultimo, int n);

int main()
{
int n,uax;
 printf("Dame el numero de terminos ");
 scanf("%d",&n);
 fibonacci(0,1,n);

}

/*int Nfibonacci(int n)
{
    int aux;
 if(n==1)
 {
   printf("%d",n);
   }else{

   aux=Nfibonacci(n-1)+Nfibonacci(n-2);
   printf("%d",aux);




}
}
*/
void fibonacci(int penultimo, int ultimo,int n){
int actual;
printf("%d",ultimo);
if (n>1){
n--;
actual=penultimo + ultimo;
fibonacci(ultimo,actual,n);
}
}
