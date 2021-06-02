#include <stdio.h>
#include <stdlib.h>
#define TAM 10

#include "EstruturaVetores.h"

struct 
{
    int tam;
    int cont;
    int *p;
}auxStruct[TAM];

void dobrar(int *x)
{

    *x = *x * 2;
}
/*
Objetivo: criar estrutura auxiliar na posição 'posicao'.
com tamanho 'tamanho'
Rertono (int)
    SUCESSO - criado com sucesso
    JA_TEM_ESTRUTURA_AUXILIAR - já tem estrutura na posição
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    SEM_ESPACO_DE_MEMORIA - Sem espaço de memória
    TAMANHO_INVALIDO - o tamanho tem inteiro maior ou igual a 1
*/
int criarEstruturaAuxiliar(int posicao, int tamanho)
{

    if ((posicao<1 || posicao>TAM))
        return POSICAO_INVALIDA;    
    if(tamanho < 1)
        return TAMANHO_INVALIDO;
    if(NULL==malloc(tamanho*sizeof(int)))    
        return SEM_ESPACO_DE_MEMORIA;
    if(auxStruct[posicao-1].p!= NULL)
        return JA_TEM_ESTRUTURA_AUXILIAR;

    
    auxStruct[posicao-1].p = (int *)(malloc(tamanho * sizeof(int)));
    auxStruct[posicao-1].tam = tamanho;
    
    return SUCESSO;
}

/*
Objetivo: inserir número 'valor' em estrutura auxiliar da posição 'posicao'
Rertono (int)
    SUCESSO - inserido com sucesso
    SEM_ESPACO - não tem espaço
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
CONSTANTES
*/
int inserirNumeroEmEstrutura(int posicao, int valor)
{
    int i = 0;
    int retorno = 0;      
    
    if (posicao<1 || posicao>TAM)    
        retorno = POSICAO_INVALIDA;      
    else
    {   if (auxStruct[posicao-1].p!=NULL)
        {   if (auxStruct[posicao-1].cont  < auxStruct[posicao-1].tam)
            {   for(i=0;i<auxStruct[posicao-1].tam;i++)
                {   if(auxStruct[posicao-1].cont == i)
                    {
                        auxStruct[posicao-1].p[i] = valor;  
                        auxStruct[posicao-1].cont++;                        
                        return SUCESSO;                              
                    }
                } 
            }
        else
        {
            retorno = SEM_ESPACO;
        }
        
    }
    else
        retorno = SEM_ESTRUTURA_AUXILIAR;
    }    
    
    return retorno;
}


/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar no final da estrutura.
ex: suponha os valores [3, 8, 7, 9,  ,  ]. Após excluir, a estrutura deve ficar da seguinte forma [3, 8, 7,  ,  ,  ].
Obs. Esta é uma exclusão lógica
Rertono (int)
    SUCESSO - excluido com sucesso
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int excluirNumeroDoFinaldaEstrutura(int posicao)
{ 
    if(posicao<1 || posicao>TAM)
        return POSICAO_INVALIDA;
    if(auxStruct[posicao-1].tam == 0)
        return SEM_ESTRUTURA_AUXILIAR;
    if(auxStruct[posicao-1].cont== 0)
        return ESTRUTURA_AUXILIAR_VAZIA;    
    
    auxStruct[posicao-1].cont--;//EXCLUI O ULTIMO
    
    return SUCESSO;
}

/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar da posição 'posicao'.
Caso seja excluido, os números posteriores devem ser movidos para as posições anteriores
ex: suponha os valores [3, 8, 7, 9,  ,  ] onde deve ser excluido o valor 8. A estrutura deve ficar da seguinte forma [3, 7, 9,  ,  ,  ]
Obs. Esta é uma exclusão lógica
Rertono (int)
    SUCESSO - excluido com sucesso 'valor' da estrutura na posição 'posicao'
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    NUMERO_INEXISTENTE - Número não existe
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int excluirNumeroEspecificoDeEstrutura(int posicao, int valor)
{
    int retorno = 0;    
	int cont = 0;
    int i = 0,j = 0;
     
    for(j=0;j<auxStruct[posicao-1].cont;j++)  
    {   if(auxStruct[posicao-1].p[j] == valor)
        {
            cont++;
        }    
    }
    if(cont == 0)
        retorno = NUMERO_INEXISTENTE;
    
    if(posicao<1 || posicao>TAM)
		retorno = POSICAO_INVALIDA;

    if(auxStruct[posicao-1].cont == 0)
        retorno = ESTRUTURA_AUXILIAR_VAZIA;
    
    if(auxStruct[posicao-1].tam == 0)
        retorno = SEM_ESTRUTURA_AUXILIAR;   

    else 
    {
     for(i=0;i<auxStruct[posicao-1].tam;i++)
        {
            if(auxStruct[posicao-1].cont == i)
            {
                auxStruct[posicao-1].p[i] = valor;  
                auxStruct[posicao-1].cont--;                        
                                              
            }
        }
        retorno = SUCESSO;
    }
    return retorno;    
}

/*
Objetivo: retorna os números ordenados da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao (1..10)'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
    if(posicao<1 || posicao>TAM)
        return POSICAO_INVALIDA;
    if(auxStruct[posicao-1].tam == 0)
        return SEM_ESTRUTURA_AUXILIAR;     
    
    for(int i = 0; i<auxStruct[posicao-1].cont;i++)
    {
        vetorAux[i] = auxStruct[posicao-1].p[i];        
    }    
      
    return SUCESSO;
}

int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
    int i,j, aux = 0;

    if(posicao<1 || posicao>TAM)
        return POSICAO_INVALIDA;
    if(auxStruct[posicao-1].tam == 0)
        return SEM_ESTRUTURA_AUXILIAR;
    
    for (j = 1; j < auxStruct[posicao-1].cont; j++) 
    {   for (i = 0; i < auxStruct[posicao-1].cont - 1; i++) 
        {
            aux = vetorAux[i];
            vetorAux[i] = vetorAux[i + 1];
            vetorAux[i + 1] = aux;     
    
        }
    }  
    return SUCESSO;
}

/*
Objetivo: retorna os números de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
*/
int getDadosDeTodasEstruturasAuxiliares(int vetorAux[])
{
    int i=0,k=0,cont = 0,verifica = 0;

    for(i=0;i<TAM;i++)
    {
        cont += auxStruct[i].cont;         
    }
    if(cont == 0)
    {
        return TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;
    }        
    
    for(k=0;k<TAM;k++)
    {   if(auxStruct[k].cont > 0)
        {   for(i=0;i<auxStruct[k].cont;i++)
            {
                vetorAux[verifica] = auxStruct[k].p[i];
                verifica++;
            }       
        }
        if(verifica == cont) 
            break;

    }       
        return SUCESSO;  
}

/*
Objetivo: retorna os números ordenados de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
*/
int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[])
{   
    int i = 0,j = 0,aux = 0, contgeral = 0, retorno = 0,troca = 0;
      
      for(i=0;i<TAM;i++)
    {
        contgeral += auxStruct[i].cont;           
    }
    if(contgeral == 0)
        return TODAS_ESTRUTURAS_AUXILIARES_VAZIAS; 
    
    
    for(j=0;j<TAM;j++)
        {
            if(auxStruct[j].cont > 0)
            {
                for(i=0;i<auxStruct[j].cont;i++)
                {
                    vetorAux[aux] = auxStruct[j].p[i];
                    aux++;
                }
                
            }
            if(aux == contgeral) 
                break;
        }   
         for (j = 1; j < aux; j++) 
    {
        for (i = 0; i < aux - 1; i++) 
        {
            if (vetorAux[i] > vetorAux[i + 1]) 
            {
                troca = vetorAux[i];
                vetorAux[i] = vetorAux[i + 1];
                vetorAux[i + 1] = troca;
            }
        }
    }       
    
    return SUCESSO;
}

/*
Objetivo: modificar o tamanho da estrutura auxiliar da posição 'posicao' para o novo tamanho 'novoTamanho' + tamanho atual
Suponha o tamanho inicial = x, e novo tamanho = n. O tamanho resultante deve ser x + n. Sendo que x + n deve ser sempre >= 1
Rertono (int)
    SUCESSO - foi modificado corretamente o tamanho da estrutura auxiliar
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    NOVO_TAMANHO_INVALIDO - novo tamanho não pode ser negativo
    SEM_ESPACO_DE_MEMORIA - erro na alocação do novo valor
*/
int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho)
{
    int i=0, modiTam = auxStruct[posicao-1].tam + novoTamanho, aux[modiTam];

    if (posicao<1 || posicao>TAM)
        return POSICAO_INVALIDA;    
    if(modiTam < 1)
        return NOVO_TAMANHO_INVALIDO;
    if(auxStruct[posicao-1].tam == 0)  
        return SEM_ESTRUTURA_AUXILIAR;
    if(NULL==malloc(modiTam*sizeof(int)))
        return SEM_ESPACO_DE_MEMORIA;  

   
        for(i=0;i<auxStruct[posicao-1].cont;i++)
        {      
            aux[i] = auxStruct[posicao-1].p[i];
        }

    auxStruct[posicao-1].p = (int *)(malloc(modiTam * sizeof(int)));
    auxStruct[posicao-1].tam = modiTam;

        for(i=0;i<auxStruct[posicao-1].cont;i++)
        {
            auxStruct[posicao-1].p[i] = aux[i];
        }
    
    return SUCESSO;  
}

/*
Objetivo: retorna a quantidade de elementos preenchidos da estrutura auxiliar da posição 'posicao'.
Retorno (int)
    POSICAO_INVALIDA - posição inválida
    SEM_ESTRUTURA_AUXILIAR - sem estrutura auxiliar
    ESTRUTURA_AUXILIAR_VAZIA - estrutura auxiliar vazia
    Um número int > 0 correpondente a quantidade de elementos preenchidos da estrutura
*/
int getQuantidadeElementosEstruturaAuxiliar(int posicao)
{

  if (posicao<1 || posicao>TAM)
        return POSICAO_INVALIDA;
    if(auxStruct[posicao-1].tam == 0)
        return SEM_ESTRUTURA_AUXILIAR;
    if(auxStruct[posicao-1].cont == 0)
        return ESTRUTURA_AUXILIAR_VAZIA;

    if( auxStruct[posicao-1].cont > auxStruct[posicao-1].tam)
        auxStruct[posicao-1].cont = auxStruct[posicao-1].tam;    

    return auxStruct[posicao-1].cont;    
}

/*
Objetivo: montar a lista encadeada com cabeçote com todos os números presentes em todas as estruturas.
Retorno (No*)
    NULL, caso não tenha nenhum número nas listas
    No*, ponteiro para o início da lista com cabeçote
*/
No *montarListaEncadeadaComCabecote()
{
  int contador,qtdElementos=0,i=0,k=0;
    No *inicioP=NULL;
    
    for(i = 0;i < TAM;i++)
    {
        qtdElementos += auxStruct[i].cont;
    }
    
    for( i = qtdElementos;i != 0;i--)
    {
        for(int j = auxStruct[i].cont;j != 0;j--)
        {
            No *novo = (No*)malloc(sizeof(No));
            novo -> conteudo = auxStruct[i].p[j - 1];
            novo -> prox = inicioP;
            inicioP=novo;
        }
    }
    return inicioP;

}

/*
Objetivo: retorna os números da lista enceada com cabeçote armazenando em vetorAux.
Retorno void
*/
void getDadosListaEncadeadaComCabecote(No *inicio, int vetorAux[])
{
     No *pont = inicio;
    for(int i = 0;i < TAM;i++){
        vetorAux[i] = pont -> conteudo;
        pont = pont -> prox;
    }
}

/*
Objetivo: Destruir a lista encadeada com cabeçote a partir de início.
O ponteiro inicio deve ficar com NULL.
Retorno 
    void.
*/
void destruirListaEncadeadaComCabecote(No **inicio)
{
    *inicio = NULL;
}

/*
Objetivo: inicializa o programa. deve ser chamado ao inicio do programa 
*/

void inicializar(){
int i=0;
for( i=0;i<TAM;i++)
    {   
        auxStruct[i].cont = 0;
        auxStruct[i].tam = 0;
        auxStruct[i].p = NULL;    
    }
}

/*
Objetivo: finaliza o programa. deve ser chamado ao final do programa 
para poder liberar todos os espaços de memória das estruturas auxiliares.
*/

void finalizar()
{
     for(int i=0;i<TAM;i++)
    {
        if(auxStruct[i].p != NULL)
            free(auxStruct[i].p);        
    }
}
