#include<stdio.h>

	soma(float N1,float N2){
			int resultado;
	
	resultado=N1+N2;
	return (resultado);
}
	int main(){
	
		float num1,num2,resultado;
	
	printf("Digite o primeiro valor a ser operado");
	scanf("%f",&num1);
	printf("Digite o segundo valor a ser operado");
	scanf("%f",&num2);
 
 resultado=soma(num1,num2);
 
 printf("resultado da soma=%f",resultado);
 return 0;	
}
