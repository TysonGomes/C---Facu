#include <stdio.h>
#include <mysql.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>
#include <locale.h>
int sublogo()

 	
	int tempest,ins;
	float valorproj;
	char nomeproj[40],descproj[256], dataini[10],datafim[10],query[256];
	
logotopo();
	setlocale(LC_ALL, "Portuguese");
	printf ("\n Nome Projeto: ");
	scanf ("%s",&nomeproj);
	printf  ("\n Valor do Projeto:");
	scanf ("%f",&valorproj);
    printf ("\n Descrição do Projeto ");
	scanf ("%s",&descproj);
	sublogo();
	printf ("\n----- Data inicio do Projeto------\n ");
	data(dataini);
	printf ("\n Tempo Estimado:");
	scanf ("%d",&tempest);
	printf ("\n----- Data Termina do Projeto------\n ");
	data(datafim);
    
    MYSQL conn;
	mysql_init(&conn);
      if ( mysql_real_connect(&conn, "localhost", "nigga", "9886", "SHTest", 0, NULL, 0)){
      
	    sprintf(query,"INSERT INTO projtest (nomeproj,valorproj,descproj,dataini,tempest,datafim) VALUES ('%s','%2.f', '%s','%s','%d','%s');",nomeproj,valorproj,descproj,dataini,tempest,datafim);
	    
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
