#include <stdio.h>
#include <mysql.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>

int main(){
	int d , m , a;
	char dt[10];
	dia:
	printf("digite o dia ");
	scanf ("%d",&d);
	if (d<1 || d>31){
		printf ("Dia digitado invalido por favor digite o dia entre 1 e 31 \n");
		getch();
		goto dia;}
		else 
		printf ("Dia digitado com sucesso \n"); 
	
	

	 mes:
	 	system("CLS");
	printf("digite o mês ");
	scanf ("%d",&m);
	if (m<1 || m>12){
		printf ("Mes digitado invalido por favor digite o dia entre 1 e 12 \n");
		getch();
		goto mes;}
		else 
		printf ("Dia digitado com sucesso \n"); 
	
	
	
	ano:
		system("CLS");
	printf("digite o ano ");
	scanf ("%d",&a);
	if (a<2017 || a>2999){
		printf ("Ano digitado invalido por favor digite o dia entre 2017 e 2999 \n");
		getch();
		goto ano;}
		else 
		printf ("Dia digitado com sucesso \n"); 
	
	sprintf(dt,"%d/%d/%d",d,m,a);
	printf ("%s",dt);
	
}
