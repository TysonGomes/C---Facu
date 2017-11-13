#include <stdio.h>
#include <mysql.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>

int main (){
	int ins;
	char n [40], s[1];
	char query[256];
	
	
	MYSQL conn;
	mysql_init(&conn);
      if ( mysql_real_connect(&conn, "localhost", "nigga", "9886", "teste01", 0, NULL, 0)){
      	printf("Conectado com sucesso \n");
    	system("CLS");
		printf ("Digite o nome \n");
		scanf ("%s",&n);
		printf ("sexo");
		scanf ("%s",&s);
	    sprintf(query,"insert into cliente (nome,sexo) values ('%s','%s');",n,s);
	    
		ins=mysql_query(&conn,query);
      	
      	if(!ins){
		  
		   printf("Registros inseridos %d\n", mysql_affected_rows(&conn));}
		   
        else printf("Erro na inserção %d : %s\n", mysql_errno(&conn), mysql_error(&conn));
      	
      	mysql_close(&conn);
	  }
	else {
		printf("Falha de conexao\n");
            printf("Erro %d : %s\n", mysql_errno(&conn), mysql_error(&conn));
		
		
	}
	
getch();
	
	
	
}
