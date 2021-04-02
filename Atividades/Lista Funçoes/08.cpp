#include <stdio.h>
#include<stdlib.h>
void clearbuffer(){
	int ch;
	do{ch-getchar();
	}while (ch!=0&&ch!=EOF);
}

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct Cliente {
    char nome[64];
    Data DataNasc;
    char cpf[15];
    char sexo;
} Cliente;

Cliente cadastrarCliente() {
    Cliente cliente;
    int DataNasc, dia, mes, ano;

    printf("NOME: ");
    fgets(cliente.nome, 64, stdin);

	printf("Sexo: ");
    scanf("%c", &cliente.sexo);

    printf("Data De Nascimento (DDMMYYYY): ");
    scanf("%d", &DataNasc);
    clearbuffer();

    printf("CPF (SOMENTE NUMEROS): ");
    fgets(cliente.cpf, 15, stdin);
       
    cliente.DataNasc.dia = DataNasc / 1000000;
    cliente.DataNasc.mes = DataNasc % 1000000 / 10000;
    cliente.DataNasc.ano = DataNasc % 1000000 % 10000;

    return cliente;

}

int main() {

    Cliente clienteCadastrado = cadastrarCliente();
	printf("********************************************\n");
    printf("********************************************\n");
    
	printf("Nome cadastrado: %s\n", clienteCadastrado.nome);
    printf("Data de nascimento cadastrada: %d/%d/%d\n", clienteCadastrado.DataNasc.dia, clienteCadastrado.DataNasc.mes, clienteCadastrado.DataNasc.ano);
    printf("CPF cadastrado: %s\n", clienteCadastrado.cpf);
    printf("Sexo cadastrado: %c\n", clienteCadastrado.sexo);

    return 0;
}

