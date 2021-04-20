#include<stdio.h>
#include<stdlib.h>
#include<string.h>

   int main(){
                int quant, cont;
				int opcao, opcao1,opcao2,opcao3, opcao4,opcao5;
				int cads,cads1,cads2,CADS,CADS1,CADS2;

struct aluno{  
    char nome[64];
    int DataNasc;
    char cpf[15];
    char sexo;
}
Aluno[300];


struct professor{  
    char nome[64];
    int DataNasc;
    char cpf[15];
    char sexo;
}
Professor[300];

struct disciplina{  
    char nome[64];
    int  semestre;
    char prof[64];    
}
Disciplina[300];


 
	while(opcao!=0){

	          	printf("------------------------------------\n");
	          	printf("         SEJA BEM VINDO\n");
	          	printf("------------------------------------\n");
	          
			  	printf(" 0-SAIR\n");
			  	printf(" 1-CADASTRAR ALUNO\n");
	          	printf(" 2-CADASTRAR PROFESSOR\n");
	          	printf(" 3-CADASTRAR DISCIPLINA\n");
	          	printf(" 4-LISTAR\n");
	          	printf(" 5-ATUALIZAR\n");
	          	printf(" 6-EXCLUIR\n");
	          	
	         	
				printf("------------------------------------\n");
	          	printf("----QUAL DESEJA ACESSAR?---- \n");
	          	printf("------------------------------------\n");
			  	scanf("%i", &opcao);

	switch(opcao){
case 1: //CADASTRAR ALUNO
    		system("cls");  
	     	
			 		printf("----BEM VINDO AO CADASTRO DE ALUNOS----\n\n\n");		
					
					printf("QUANTOS ALUNOS JA ESTAO CADASTRADOS?(ENCONTRADO EM LISTAR)\n");
	      			scanf("%i", &CADS);
	      			  	  
	      			printf("QUANTOS ALUNOS DESEJA CADASTRAR?");
	      			scanf("%i", &cads);
	    	
			system("cls"); 			
			   
			   		for(cont=1+CADS;cont<=cads+CADS;cont++){
			
						printf("NOME: ");
					    fflush(stdin);
					    scanf("%[^\n]s",Aluno[cont].nome);
						
						printf("Sexo: ");
						fflush(stdin);
					    scanf("%c", &Aluno[cont].sexo);
					    
					    
					    printf("Data De Nascimento (DDMMYYYY): ");
					    scanf("%i", &Aluno[cont].DataNasc);
					
					    printf("CPF (SOMENTE NUMEROS): ");
					    fflush(stdin);
					    fgets(Aluno[cont].cpf, 15, stdin);
					
					    printf("------------------------------------------------------- \n");  
		
		   }
			system("pause");
			system("cls"); 		   
break; //FIM CADASTRAR ALUNO

case 2://CADASTRAR PROFESSOR

	  		system("cls");  
     			
					printf("----BEM VINDO AO CADASTRO DE PROFESSORES----\n\n\n");
		
					printf("Quantos professores ja estao cadastrados?(encontrado em listar)\n");
	      			scanf("%i", &CADS1);
	      			  	  
	      			printf("QUANTOS PROFESSORES DESEJA CADASTRAR?");
	      			
					scanf("%i", &cads1);
   		
		   	system("cls"); 			
		   
		   for(cont=1+CADS1;cont<=cads1+CADS1;cont++){
		
						printf("Nome do professor : ");
					    fflush(stdin);
					    scanf("%[^\n]s",Professor[cont].nome);
						
						printf("Sexo: ");
						fflush(stdin);
					    scanf("%c", &Professor[cont].sexo);
					    
					    
					    printf("Data De Nascimento (DDMMYYYY): ");
					    scanf("%i", &Professor[cont].DataNasc);
					
					    printf("CPF (SOMENTE NUMEROS): ");
					    fflush(stdin);
					    fgets(Professor[cont].cpf, 15, stdin);
					
					    printf("------------------------------------------------------- \n");  
						
		   }
	
			system("pause");
			system("cls"); 		   

break;//FIM CADASTRAR PROFESSOR      

case 3: //CADASTRAR DISCIPLINA
 			
			system("cls");
			
					printf("Quantas disciplinas ja estao cadastradadas?(Encontando em listar)\n");     	 	
				  	scanf("%i",&CADS2);
					printf("QUANTAS DISCIPLINAS DESEJA CADASTRAR?");
	    			scanf("%i",&cads2);
	   
			system("cls");
   
    	for(cont=1+CADS2;cont<=cads2+CADS2;cont++){
		
					printf("NOME DA DISICPLINA: ");
					fflush(stdin);
					scanf("%[^\n]s",Disciplina[cont].nome);
						
					printf("SEMESTRE: ");
					scanf("%i", &Disciplina[cont].semestre);
					
					printf("PROFESSOR DA DISCIPLINA: ");
					fflush(stdin);
					scanf("%[^\n]s",Disciplina[cont].prof);
					
					printf("------------------------------------------------------- \n");  
						
							   }
			
			system("pause");
			system("cls"); 
							   
break;//FIM CADASTRAR DISCIPLINA

case 4: //LISTAR
			system("cls");
            
					printf("------ O Que Listar? -------\n");
					printf("1-ALUNO\n");
		            printf("2-PROFESSOR\n");
		            printf("3-DISCIPLINA\n\n");
		              
		              scanf("%i", &opcao1); 
		        
			system("cls");
        
		switch (opcao1){
           		case 1 : //LISTAR ALUNO
           
				for(cont=1;cont<=cads+CADS;cont++){
			            
					printf("MATRICULA = %i \n",cont);
				 	printf("NOME DO ALUNO : %s \n", Aluno[cont].nome);
				  	printf("SEXO DO ALUNO : %c \n", Aluno[cont].sexo);
				   	printf("CPF DO ALUNO : %s \n", Aluno[cont].cpf);
					printf("DATA DE NASCIMENTO DO ALUNO : %i \n", Aluno[cont].DataNasc);
				 	printf("------------------------------------\n");
		   		  }
	
		   	system("pause");
		  	system("cls");
	
				break;//FIM Listar Aluno
			
				case 2://Listar Professor
				
				for(cont=1;cont<=cads1+CADS1;cont++){
		        	printf("MATRICULA = %i \n",cont);
		   			printf("NOME DO PROFESSOR : %s \n", Professor[cont].nome);
		   			printf("SEXO DO PROFESSOR : %c \n", Professor[cont].sexo);
		   			printf("CPF DO PROFESSOR : %s \n", Professor[cont].cpf);
		   			printf("DATA DE NASCIMENTO DO PROFESSOR : %i \n", Professor[cont].DataNasc);
		   			printf("------------------------------------\n");
		   		  }
		   		  	system("pause");
		   		  	system("cls");
				break;
				case 3://Listar Disciplina
					for(cont=1;cont<=cads2+CADS2;cont++){
			        printf("CODIGO = %i \n",cont);
			   		printf("NOME DA DISCIPLINA : %s \n", Disciplina[cont].nome);
			   		printf("NOME  DO PROFESSOR : %s \n", Disciplina[cont].prof);
			   		printf("SEMESTRE : %i \n", Disciplina[cont].semestre);
			   		printf("------------------------------------\n");
		   		  }
			system("pause");
		   	system("cls");
				break;//Fim Listar Disciplina
			   		  	
	}//Fim Listar					


break;
case 5:
		system("cls");
		        	
					printf("1-ALUNO\n");
	             	printf("2-PROFESSOR\n");
	              	printf("3-DISCIPLINA\n\n");
	              	printf("------ O Que Atualizar? ------\n");
	              	scanf("%i",&opcao2);
              	
		switch(opcao2)	{
			case 1://Alterar Aluno
			
			system("cls");
            
			        printf("Digite a matricula do cadastro de aluno que deseja alterar\n");
					scanf("%i", &cont);
				
      				printf("ALTERANDO CADASTRO DA MATRICULA :%i \n",cont);
                        
                    printf("NOME: ");
                    fflush(stdin);
                    scanf("%[^\n]s",Aluno[cont].nome);
                              
                    printf("Sexo: ");
                    fflush(stdin);
                    scanf("%c", &Aluno[cont].sexo);
                        
                        
                    printf("Data De Nascimento (DDMMYYYY): ");
                    scanf("%i", &Aluno[cont].DataNasc);

                    printf("CPF (SOMENTE NUMEROS): ");
                    fflush(stdin);
                    fgets(Aluno[cont].cpf, 15, stdin);
                                                
                    printf("------------------------------------------------------- \n");  
	
			system("pause"); 
            system("cls");
            
			      break;
			case 2:
			system("cls");
			
					printf("Digite a matricula do cadastro de professor que deseja alterar\n");
					scanf("%i", &cont);
			
			system("cls");
                  
      				printf("ALTERANDO CADASTRO DA MATRICULA :%i \n",cont);
      
                  	printf("Nome do professor : ");
                    fflush(stdin);
                    scanf("%[^\n]s",Professor[cont].nome);
                              
                    printf("Sexo: ");
                    fflush(stdin);
                    scanf("%c", &Professor[cont].sexo);
                        
                        
                    printf("Data De Nascimento (DDMMYYYY): ");
                    scanf("%i", &Professor[cont].DataNasc);

                    printf("CPF (SOMENTE NUMEROS): ");
                    fflush(stdin);
                    fgets(Professor[cont].cpf, 15, stdin);

                    printf("------------------------------------------------------- \n"); 
            system("pause"); 
            system("cls");
			break;
			
			case 3:
			
			system("cls");
				
					printf("Digite o codigo da disciplina que deseja alterar\n");
					scanf("%i", &cont);
                    
		    system("cls");                  
           
      printf("ALTERANDO CADASTRO DO CODIGO :%i ",cont);            
           
           
                        printf("NOME DA DISICPLINA: ");
                        fflush(stdin);
                        scanf("%[^\n]s",Disciplina[cont].nome);
                              
                        printf("SEMESTRE: ");
                        scanf("%i", &Disciplina[cont].semestre);

                        printf("PROFESSOR DA DISCIPLINA: ");
                        fflush(stdin);
                        scanf("%[^\n]s",Disciplina[cont].prof);

                        printf("------------------------------------------------------- \n");  
			system("pause");
                  system("cls");
                  break;	
		
						}
break;

case 6:
				printf(" ---------EXCLUIR CADASTRO----------\n");
				printf("1-Aluno\n");
				printf("2-Professor\n");
				printf("3-Disciplina\n");
				scanf("%i", &opcao3);
		
		switch(opcao3)	{
	
			case 1:
					printf("Digite a matricula do cadastro de aluno que deseja excluir\n");
					scanf("%i", &cont);
			
			system("cls");
			
					memset (&Aluno[cont].nome,0,sizeof(Aluno[cont].nome));
					memset(&Aluno[cont].cpf,0,sizeof(Aluno[cont].cpf));
					memset(&Aluno[cont].sexo,0,sizeof(Aluno[cont].sexo));
					memset(&Aluno[cont].DataNasc,0,sizeof(Aluno[cont].DataNasc));
					printf("Cadastro de matricula %i excluido\n",cont);	
			
			system("pause");
				
			break;
			case 2:
					printf("Digite a matricula do cadastro de professor que deseja excluir\n");
					scanf("%i", &cont);
			
			system("cls");
			
					memset (&Professor[cont].nome,0,sizeof(Professor[cont].nome));
					memset(&Professor[cont].cpf,0,sizeof(Professor[cont].cpf));
					memset(&Professor[cont].sexo,0,sizeof(Professor[cont].sexo));
					memset(&Professor[cont].DataNasc,0,sizeof(Professor[cont].DataNasc));
					printf("Cadastro de matricula %i excluido",cont);
			
			system("pause");
			
			break;
			case 3:
				printf("Digite o codigo do cadastro de disciplina que deseja excluir\n");
				scanf("%i", &cont);
			system("cls");
			
					memset(&Disciplina[cont].nome,0,sizeof(Disciplina[cont].nome));
					memset(&Disciplina[cont].prof,0,sizeof(Disciplina[cont].prof));
					memset(&Disciplina[cont].semestre,0,sizeof(Disciplina[cont].semestre));
					printf("Cadastro de codigo %i excluido",cont);
				
			system("pause");
				
			break;	
		
						}
break;
	
	}
   	}	
	} 	 