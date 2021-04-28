#include <stdio.h>
#include <stdlib.h>

	int main(){
		int lista;
		float num1,num2;
		double result;	
			
			printf("op��es:\n0-Sair\n1-somar\n2-Subtrair\n3-Mutiplicar\n4-Dividir\nDigite a fun��o desejada\n");
			scanf("%i",&lista);
			
				if ((lista>0)&&(lista<5)) {
		
					printf("\nDigite o primeiro valor a ser operado :\n");
					scanf("%f",&num1);
					printf("\nDigite o segundo valor a ser operado :\n");
					scanf("%f",&num2);
				}
		
		switch (lista){
				
				case 0:
				return 0;
				break;
				
				case 1 : result = num1+num2;
				printf("\nO resultado eh=%f",result);
				break;
		
				case 2: result = num1-num2;
				printf("\nO resultado eh=%f",result);
				break;
				
				case 3: result = num1*num2;
				printf("\nO resultado eh=%f",result);
				break;
				
				case 4: 
					if(num2==0) 
				printf("N�o � possivel dividir por 0");
					
					else{	
				result = num1/num2;
				printf("\nO resultado eh=%f",result);
				break;
				}
				
				default: 
				printf("N�o � uma op��o valida,encerrando programa");
				return 0;
				break;
			
	}		
	}	
	
