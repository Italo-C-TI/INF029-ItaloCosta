#include <stdio.h>
typedef struct  {
    char palavra1[128];
    char palavra2[128];
    char palavra3[128];
} Palavras;

Palavras ler3Palavras() {
	 Palavras variavel;

    printf("Digite a primeira palavra :\n");
    fgets(variavel.palavra1, 128, stdin);

    printf("Digite a segunda palavra :\n");
    fgets(variavel.palavra2, 128, stdin);

    printf("Digite a terceira palavra :\n");
    fgets(variavel.palavra3, 128, stdin);

    return variavel;
}

int main(){
		Palavras palavras;
    	palavras = ler3Palavras();

    printf(" %s\n %s\n %s", palavras.palavra1, palavras.palavra2, palavras.palavra3);
return 0;
}


