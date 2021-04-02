#include<stdio.h>

	subtrai(float N1,float N2,float N3){
			int resultado;
	
	resultado=N1-N2-N3;
	return (resultado);
}
	int main(){
	
		float num1,num2,num3,resultado;
	
	printf("Digite o primeiro valor a ser operado");
	scanf("%f",&num1);
	printf("Digite o segundo valor a ser operado");
	scanf("%f",&num2);
	printf("Digite o terceiro valor a ser operado");
	scanf("%f",&num3);
 
 resultado=subtrai(num1,num2,num3);
 
 printf("resultado da subtracao=%f",resultado);
 return 0;	
}
