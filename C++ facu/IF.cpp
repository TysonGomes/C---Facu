#include<stdio.h>
#include<conio.h>
#include <cstdlib> 
int main() {
float n1=0,n2=0,n3=0;
printf ("Digite a nota 1 ");
scanf ("%f",&n1);
while  ((n1<0)|| (n1>10))
{ printf("\nnumero não valido \n ");
  printf ("Digite um numero entre 0 e 10: ");
  scanf ("%f",&n1);
  system("CLS");
  
}
printf ("\nDigite a nota 2 ");
scanf ("%f",&n2);
while ((n2<0) || (n2>10))
{ printf("\nnumero não valido \n ");
  printf ("Digite um numero entre 0 e 10: ");
  scanf ("%f",&n2);
  system("CLS");
}
printf ("\nDigite a nota 3 ");
scanf ("%f",&n3);
while (( n3>10)|| (n3<0))
{ printf("\nnumero  invalido! \n ");
  printf ("Digite um numero entre 0 e 10: ");
  scanf ("%f",&n3);
  system("CLS");
}
n1=(n1+n2+n3)/3;
system("CLS");
if (n1>=6){

printf("sua media e %.1f \n Aprovado!",n1);
getch();
}
else
{ printf("sua media e %.1f \n Reprovado",n1);
getch();
}
}
