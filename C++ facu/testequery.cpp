#include <stdio.h>
#include <mysql.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>

int main(){
	char n[40],s[1];
	 char query[256];
	printf("digte valor");
	scanf ("%s",&n);
	printf("digte valor");
	scanf ("%s",&s);
	sprintf(query,"insert into cliente (nome,sexo) values ('%s','%s')",n,s);
	printf("%s",query);
	getch();
	
	
	
	
	
	
	
	
}
