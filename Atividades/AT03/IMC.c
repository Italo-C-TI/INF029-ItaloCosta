#include<stdio.h> 
#include<stdlib.h>
#include"calculaIMC.h"

int  main () {
    float IMC, altura,massa;
    
    	printf("Digite sua altura em metros:\n");
    	scanf("%4f", &altura); 
		
		printf("Digite sua massa corportal em kilos:\n");
    	scanf("%4f", &massa);   
      
   IMC =indiceMC ( massa,altura);
    	
		printf("Indice de massa corporal=%2f",IMC);
    
	   return 0;
}
