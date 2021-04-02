#include <stdio.h>

 ler3Numeros(int numeros[]){
 	int i;
	 scanf("%d%d%d",&numeros[0],&numeros[1],&numeros[2]);
for(int i=0; i<3; i++){
return numeros[i];
}
}

int main(){
	int num[3], i;
printf("Digite 3 numeros separados pelo enter:\n");	
	ler3Numeros(num);
	
	printf("Numeros inseridos:\n");
	for(i=0; i<3; i++)
		printf("%d\n",num[i]);
}
