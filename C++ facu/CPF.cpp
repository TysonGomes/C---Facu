#include <stdio.h>
#include <mysql.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>
#include <locale.h>


int main (){
	int n[11], i=0 ,s=0,i2=10;
	for (i=1;i<=9;i++){
		printf("\ndigite o nro: ");
		scanf("%d",&n[i-1]);
	}
	
		//if (n[9]>9)
		//i2=10;
	//	if (n[9]<=9)
		//i2=10; 
		
		for (i=0; i<=8;i++){
	     
		s=s+n[i]*(i2-i);
	
	}
	
      if (s%11<=1){
	  n[9]=0;
	  }		
	  
	  else
	  n[9]=11-(s%11);
	
     i2=11;  	
	  s=0;
	  i=0;
   
	for (i=0;i<=9;i++){
	
	s=s+n[i]*(i2-i);
	
//printf(" posi do %d \n  , valor indice %d \n",n[i]);
}
    // printf("Valor soma %d",s);
	if (s%11<=1)
	n[10]=0;
	else
	n[10]=11-(s%11);
	
	printf("\n Dois  digitos do cpf e: ");
	for (i=0;i<=10;i++)
	if (i==8)
	printf ("/ ");
	else 
	printf("%d ",n[i]);

getch();

}

