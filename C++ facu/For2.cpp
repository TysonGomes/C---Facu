#include <stdio.h>
#include <conio.h>
int main (){
	int i,n1,n2,r;
	printf("digite o nro da base ");
	scanf ("%d",&n1);
	printf ("digite o nro da potencia ");
	scanf ("%d",&n2);
	if (n2==0){
		printf ("1");
		goto fim;
	}
	if (n2==1){
		printf("%d",n1);
	}
	else{
	r=n1;
    printf("%d",n1);
	for (i=2;i<=n2;i++){
	r=r*n1;
	printf("\n%d  ",r);	
	}}
	fim:
	getch();
}
