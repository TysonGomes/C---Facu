#include <cstdlib>
#include<stdio.h>
#include<conio.h>

int main(){
	int matriz [2][2],zc,zl,m,n;
	
	for (zl=0;zl<=2;zl++){
		for (zc=0;zc<=2;zc++){
			matriz[zl][zc]=9;
		}
	}
	for(m=0;m<=2;m++){
		for (n=0;n<=2;n++)
        	printf ("  %d  %d  %d \n",matriz[m][n],matriz[m][n],matriz[m][n]);
			}
			getch();
			}
