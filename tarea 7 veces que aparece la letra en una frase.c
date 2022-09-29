#include <stdio.h>
#include <string.h>
char pedirCadena(char cadena[35]);
char pedirCaracter(char cad);
int Vaparece(int n,char cad[35],char ambir);

int main()
{
char cad[35],let;
int lon,i,cont=0;
cad=pedirCadena(cad);
let=pedirCaracter(let);
lon=strlen(cad);
Vaparece(lon,cad,let);
printf("la letra %c aparace %d veces en la frase \n ",let,cont);
}

char pedirCadena(char cadena[35])
{
printf("dame la frase \n");
gets(cadena);

return(cadena);
}


char pedirCaracter(char cad)
{
printf("dame la frase \n");
scanf("%c",&cad);

return(cad);
}

int Vaparece(int n,char cad[35],char ambir)
{
int cont=0,i;

for(i=0;i<n;i++)
 {
  if(cad[i]==ambir)
    cont++;
  }
return(cont);
}
