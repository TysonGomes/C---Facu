#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>


int main(){
	int i=1,n3=0;
	float n1 ,n2;
	
 printf ("digite o tempo ");
 scanf ("%f",&n1);
 n2=n1;
 while (i<=4){
printf ("digite o tempo ");
 scanf ("%f",&n1);

  
 	if(n1<=n2){
 		n2=n1;
 		n3=i;
	 }
 	i++;
 	
 }
	
	printf(" melhor tempo %2.f , na volta %d ",n2,n3+1);
	getch();
}




