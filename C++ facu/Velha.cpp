#include <cstdlib>
#include<stdio.h>
#include<conio.h>

int main(){
	int matriz [3][3],l,c, j=1,zc,zl,m;
	
	for (zl=0;zl<3;zl++){
		for (zc=0;zc<3;zc++){
			matriz[zl][zc]=9;
		}
	}
	j=1;
	while (j<=9){
		system("CLS");
		printf("  \n jogo da velha \n");
        for(m=0;m<3;m++){
        	printf ("  %d  %d  %d \n",matriz[m][0],matriz[m][1],matriz[m][2]);
        	
        	
		}
		
		
		if(j%2==0){
		
		printf("\n 2 Jogador digite a coordenada  \n linha ");
	}
		else{
		
		printf("\n 1 jogador digite a coordenada  \n linha  ");
		
	}
	 scanf ("%d",&l);
	 printf("Coluna  ");
	 scanf("%d",&c);
	    if(j%2==0){
	    	matriz[l-1][c-1]=0;
	    		
		}
		else {
			matriz[l-1][c-1]=1;
		}
	 j++;
	 if    ((matriz[0][0]==0 && matriz[0][1]==0 && matriz[0][2]==0)||
	 	   (matriz[2][0]==0 && matriz[2][1]==0 && matriz[2][2]==0)||
           (matriz[0][0]==0 && matriz[1][0]==0 && matriz[2][0]==0)||
           (matriz[0][1]==0 && matriz[1][1]==0 && matriz[2][1]==0)||
           (matriz[0][2]==0 && matriz[1][2]==0 && matriz[2][2]==0)||
           (matriz[0][0]==0 && matriz[1][1]==0 && matriz[2][2]==0)||
           (matriz[0][2]==0 && matriz[1][1]==0 && matriz[2][0]==0))
	       {        printf(" Player 2 venceu");
	                getch();
	                break;
	                             }
	if     ((matriz[0][0]==1 && matriz[0][1]==1 && matriz[0][2]==1)||
	 	   (matriz[2][0]==1 && matriz[2][1]==1 && matriz[2][2]==1)||
           (matriz[0][0]==1 && matriz[1][0]==1 && matriz[2][0]==1)||
           (matriz[0][1]==1 && matriz[1][1]==1 && matriz[2][1]==1)||
           (matriz[0][2]==1 && matriz[1][2]==1 && matriz[2][2]==1)||
           (matriz[0][0]==1 && matriz[1][1]==1 && matriz[2][2]==1)||
           (matriz[0][2]==1 && matriz[1][1]==1 && matriz[2][0]==1))
		   {         
		   printf(" Player 1 venceu");
	         getch();
			 break;}
			 if (j==10){

           printf("\n Partida empatada");

                                        }
	         
	 
	 
	 /*||
       /*    (matriz[1][0]==0 && matriz[1][1]==0 && matriz[1][2]==0)||
           (matriz[2][0]==0 && matriz[2][1]==0 && matriz[2][2]==0)||
           (matriz[0][0]==0 && matriz[1][0]==0 && matriz[2][0]==0)||
           (matriz[0][1]==0 && matriz[1][1]==0 && matriz[2][1]==0)||
           (matriz[0][2]==0 && matriz[1][2]==0 && matriz[2][2]==0)||
           (matriz[0][0]==0 && matriz[1][1]==0 && matriz[2][2]==0)||
           (matriz[0][2]==0 && matriz[1][1]==0 && matriz[2][0]==0)){
           	
           	printf("Player2 venceu");
           	getch();
			   }
        if ((matriz[0][0]==1 && matriz[0][1]==1 && matriz[0][2]==1)||
           (matriz[1][0]==1 && matriz[1][1]==1 && matriz[1][2]==1)||
           (matriz[2][0]==1 && matriz[2][1]==1 && matriz[2][2]==1)||
           (matriz[0][0]==1 && matriz[1][0]==1 && matriz[2][0]==1)||
           (matriz[0][1]==1 && matriz[1][1]==1 && matriz[2][1]==1)||
           (matriz[0][2]==1 && matriz[1][2]==1 && matriz[2][2]==1)||
           (matriz[0][0]==1 && matriz[1][1]==1 && matriz[2][2]==1)||
           (matriz[0][2]==1 && matriz[1][1]==1 && matriz[2][0]==1)){
           	
           	
			   
           	
	 
	 
	 
	 */
	







}
	getch();
}

   
