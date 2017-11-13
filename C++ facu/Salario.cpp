#include<stdio.h>
#include<conio.h>
float sl(float s1 ){
	//float s1;
	
	s1=s1-(s1*12/100);
	
	return s1;
	
	
}


int main() {
float s1;
printf ("digite seu salario: ");
scanf ("%f",&s1);
s1=sl(s1);
printf("seu salario liquido e %.2f",s1);
getch();

}

