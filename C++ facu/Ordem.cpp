#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>

int ordem(){
int n1,n2,n3;
	printf ("digite o nro ");
	scanf("%d",&n1);
	printf ("digite o nro ");
	scanf ("%d",&n2);
	printf ("digite o nro ");
	scanf ("%d",&n3);
	


if (n1<=n2 && n1<=n3){
  	if (n2>=n3)
  	printf("%d %d %d",n1,n3,n2);
  	else
  	printf("%d %d %d",n1,n2,n3);

}
if (n2<=n1 && n2<=n3){
  	if (n1>=n3)
  	printf("%d %d %d",n2,n3,n1);
  	else
  	printf("%d %d %d",n2,n1,n3);


}
if (n3<=n1 && n3<=n2){
  	if (n1>=n2)
  	printf("%d %d %d",n3,n2,n1);
  	else
  	printf("%d %d %d",n3,n1,n2);
}
}



int main(){
	
	
   ordem();
	
	
}

