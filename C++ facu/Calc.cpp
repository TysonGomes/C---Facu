#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>
int main (){
	float n1,n2;
	char op[1];
	ini:
	printf("selecione o operador");
	printf ("\n| --------------------|");
	printf ("\n + soma \n - substracao \n / divisao \n * multiplicacao ");
	printf ("\n|---------------------|\n");
	scanf("%s",op);
	if (strcmp (op,"+") == 0)
	{ 
	printf("digite o primeiro numero ");
	scanf ("%f",&n1);
	printf("digite o segundo numero ");
	scanf ("%f",&n2);
	n1=n1+n2;	
	printf("soma e = %.0f",n1);
	}
	else{
	
	if (strcmp (op,"-") == 0)
	{ 
	printf("digite o primeiro numero ");
	scanf ("%f",&n1);
	printf("digite o segundo numero ");
	scanf ("%f",&n2);
	n1=n1-n2;	
	printf("subtração e = %.0f",n1);
	}
	 else{
	 
	 if (strcmp (op,"*") == 0)
	{ 
	printf("digite o primeiro numero ");
	scanf ("%f",&n1);
	printf("digite o segundo numero ");
	scanf ("%f",&n2);
	n1=n1*n2;	
	printf("resultado e = %.0f",n1);
	} else{
	
	if (strcmp (op,"/") == 0)
	{ 
	printf("digite o primeiro numero ");
	scanf ("%f",&n1);
	printf("digite o segundo numero ");
	scanf ("%f",&n2);
	n1=n1/n2;	
	printf("resultado e = %.1f",n1);
	}
	else{
		system ("CLS");
		printf("Operador invalido \n favor digite + ,-,/,* \n Digite qualquer tecla para continuar ");
		
		getch();
		system ("CLS");
		goto ini;
	}}}} 
	getch();
	//while( (op=="/") ||(op=="*" )||(op=="+") ||( op=="-" ||))
	}	
	
	
	
	
	
	
