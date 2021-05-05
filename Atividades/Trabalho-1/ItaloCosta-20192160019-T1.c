//#################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de An�lise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laborat�rio de Programa��o
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orienta��es gerais -----
//  Descri��o: esse arquivo deve conter as quest�es do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as quest�es do trabalho

//  ----- Dados do Aluno -----
//  Nome:Italo Costa Nogueira
//  email:costa.italo.ti@gmail.com
//  Matr�cula:20192160019
//  Semestre:2

//  Copyright � 2016 Renato Novais. All rights reserved.
// �ltima atualiza��o: 20/06/2018 - 19/08/2016

// #################################################

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void usarData();
/*
## fun��o utilizada para testes  ##
 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */


int somar(int x, int y)
{
    int soma = 0;
    soma = x + y;
    return soma;
}

/*
## fun��o utilizada para testes  ##
 fatorial = fatorial de um n�mero
@objetivo
    calcular o fatorial de um n�mero
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
int fatorial(int x)
{ //fun��o utilizada para testes
    int fat = 1,i;
      
      if(x<=1)
        fat=1;
      
      else{
        for (i=2; i <= x; i++)
            fat = fat * i ;
      }
    return fat;
}

/*typedef struct DQ
{
    char sDia [3];
    char sMes [3];
    char sAno [3];
    int valido; // 0 se inv�lido, e 1 se v�lido 
} DataQuebrada;
DataQuebrada quebraData(char *data){
    //[ e , r  ,  /  ,    ,   ,  /  ,    ,     ,    ,      ,]
}*/
/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = m�s, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inv�lida
    1 -> se data v�lida
 @restri��es
    N�o utilizar fun��es pr�prias de string (ex: strtok)   
    pode utilizar strlen para pegar o tamanho da string
 */

int q1(char *data){
    char dia[3], mes[3], ano[5]; 
    int tam, i, k, j = 0, contBarra=0;
	
	//Encontra o tamanho da string
    for(tam=0;data[tam]!='\0';tam++){ 
	}
  
    // Verifica os caracteres e o numero de '/' 
  	for (k=0; k < tam; k++){
        if (data[k]=='/')
            contBarra++;
        if (contBarra>2)
            return 0;        
        if(data[k]!='/' && data[k]!='0' && data[k]!='1' && data[k]!='2' && data[k]!='3' && 
           data[k]!='4' && data[k]!='5' && data[k]!='6' && data[k]!='7' && data[k]!='8' && 
           data[k]!='9')
           return 0;
    }
    dia[0]='\0';
    mes[0]='\0';
    ano[0]='\0';
   
    // quebra a data
    for (i=0;  data[i]!='/'; i++)
        dia[i] = data[i];
    for (i=i+1;  data[i]!='/'; i++){
        mes[j] = data[i];
        j++;
    }
    j=0;
    
    for (i=i+1; i <= tam; i++ ){
        ano[j]=data[i];
        j++;
    }
    
	// Converte dia mes e ano em inteiros    
    int iDia = atoi(dia);
    int iMes = atoi(mes);
    int iAno = atoi(ano);
    int fDia = atoi(dia);
    int fMes = atoi(mes);
    int fAno = atoi(ano);

     if(iAno<=99){//para datas de 2 digitos
        iAno=iAno + 2000;
    }
    
	//Valida dia 
	if ( (iDia>0 && iDia<=31) && (iMes>0 && iMes<=12) && ( iAno >= 0) ){
	if ( (iDia == 29 && iMes == 2) && ( (iAno % 4) == 0) ) { //verifica se o ano e bissexto
                return 1;
            }
            if (iDia <= 28 && iMes == 2) {//verifica o mes de feveireiro
                return 1;
            }
            if ((iDia <= 30) && (iMes == 4 || iMes == 6 || iMes == 9 || iMes == 11)) {//verifica os meses de 30 dias
                return 1;
            }
            if ((iDia <=31) && (iMes == 1 || iMes == 3 || iMes == 5 || iMes == 7 || iMes ==8 || iMes == 10 || iMes == 12)) {//verifica os meses de 31 dias
                return 1;
            }
            else
            {
                return 0;
            }
      }
    else{
        return 0;
        	}
   

}
/*
 Q2 = diferen�a entre duas datas
 @objetivo
    Calcular a diferen�a em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. Al�m disso, a fun��o tem tr�s par�metros qtdDias, qtdMeses e qtdAnos. Esses tr�s par�metros devem ser utilizados para guardar os resultados dos c�lculos. Na chamada da fun��o deve passar o valor -1 para os tr�s
 @saida
    1 -> c�lculo de diferen�a realizado com sucesso
    2 -> datainicial inv�lida
    3 -> datafinal inv�lida
    4 -> datainicial > datafinal
 */
int q2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos)
{
    int iDia = 0, iMes = 0, iAno = 0, fDia = 0, fMes = 0, fAno = 0; 
    usarData( datainicial,&iDia, &iMes, &iAno);
    usarData(datafinal, &fDia, &fMes, &fAno);
    int nDias ,nMeses ,nAnos ;
    

   
    if (q1(datainicial) == 0) {
        return 2;
    } else if (q1(datafinal) == 0) {
        return 3;
    }
  

    if ((iAno > fAno )|| (iAno == fAno && iMes > fMes) || (iAno==fAno && iMes == fMes && iDia > fDia))  {
        return 4;
    }
    
    nDias = fDia - iDia;
    nMeses = fAno - iAno;
    nAnos = fMes - iMes;

 if (nDias < 0) {
        nMeses--;
        if (iMes == 1 || iMes == 3 || iMes == 5 || iMes == 7 || iMes == 8 || iMes== 10 || iMes == 12) {
            nDias += 31;
        } else if (iMes == 4 || iMes == 6 || iMes == 9 || iMes == 11) {
            nDias =nDias + 30;
        }    
        else if(iMes==2 && ( (iDia == 29 && iMes == 2) && ( (iAno % 4) == 0) )){
            nDias=nDias+29;
        }
        else if(iMes=2){
            nDias=nDias+28;
        }
 }
        if(nMeses < 0){
        nMeses=nMeses+12;
        nAnos--;
 }
    *qtdDias = nDias;
    *qtdAnos = nAnos;
    *qtdMeses= nMeses;
    
return 1;
}

/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se � uma pesquisa Case Sensitive ou n�o. Se isCaseSensitive = 1, a pesquisa deve considerar diferen�as entre mai�sculos e min�sculos.
        Se isCaseSensitive != 1, a pesquisa n�o deve  considerar diferen�as entre mai�sculos e min�sculos.
 @saida
    Um n�mero n >= 0.
 */
int q3(char *texto, char c, int isCaseSensitive){
    int i,tam=0 , qtdCaracter=0 ;
   
    for(tam=0;texto[tam]!= '\0';tam++){};
                                
        if (isCaseSensitive == 1){
            for(i=0; i<tam; i++){
                if (texto[i] == c)
                    qtdCaracter++;
            }
        }
        else{                                             
            if (c >= 65 && c <= 90){                        
                for(i=0; i<tam; i++){             
                    if (texto[i] == c || texto[i] == c+32)  
                        qtdCaracter++;
                }
            }else if (c >= 97 && c <= 122){                 
                for(i=0; i<tam; i++){
                    if (texto[i] == c || texto[i] == c-32)
                        qtdCaracter++;
                } 
            }   
        } 
        return qtdCaracter;
    }

/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorr�ncias de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que ir� guardar as 
    posi��es de in�cio e fim de cada ocorr�ncia da palavra (strBusca) no texto base (texto).
 @saida
    Um n�mero n >= 0 correspondente a quantidade de ocorr�ncias encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e sa�da correspondente. Por exemplo,
     se tiver uma �nica ocorr�ncia, a posi��o 0 do vetor deve ser preenchido com o �ndice de in�cio do texto,
      e na posi��o 1, deve ser preenchido com o �ndice de fim da ocorrencias. Se tiver duas ocorr�ncias, 
      a segunda ocorr�ncia ser� amazenado nas posi��es 2 e 3, e assim consecutivamente.
       Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera".
        Como h� uma ocorr�ncia da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o �ndice da posi��o no texto deve come�ar ser contado a partir de 1.
        O retorno da fun��o, n, nesse caso seria 1;
 */
int q4(char *strTexto, char *strBusca, int posicoes[30]){
    int tamTexto,tamBusca,inicial, qtdOcorrencias = 0,i,j,x=0,d=0;
    
    for(i=0;i<strTexto[i]!='\0';i++){}
        tamTexto=i;
    for(j=0;strBusca[j]!='\0';j++){}
        tamBusca=j;

    if(tamTexto<tamBusca){
        qtdOcorrencias=0;  
    }

    for ( i = 0, x = 0; strTexto[i] != '\0'; i ++) {
        if (strTexto[i] == strBusca[x]) {
            if (x == 0) 
                inicial = i;
                x ++;
        }
        else x = 0;
        
        if (strBusca[x] == '\0') {
          qtdOcorrencias ++;
            if (d < 30) {
                posicoes[d] = inicial + 1;
                posicoes[d+1] = i + 1;
                x = 0;
                d = d +2;
            } 
        else break;
        }
    }
    return qtdOcorrencias;
}

/*
 Q5 = inverte n�mero
 @objetivo
    Inverter n�mero inteiro
 @entrada
    uma int num.
 @saida
    N�mero invertido
 */

int q5(int num)
{
	int invert=0,invert1=0, invert2=0,invert3=0,i=0,rest=0,rest1=0,rest2=0,rest3=0;
    
    if (num <10){ 
        num=num*1;
    }
    
    if (num>=10 && num<100){
        
            rest=num%10;
            invert=num/10;
            num=rest*10+ invert;
    }
        
    if(num>=100 && num<1000){
          
            rest=num%100;
            invert=num/100;
            rest1=rest%10;
            invert1=rest/10;
            num=rest1*100 + invert1*10 + invert;
    }
    if (num>=1000 && num<10000){

            rest=num%1000;
            invert=num/1000;
            rest1=rest%100;
            invert1=rest/100;
            rest2=rest1%10;
            invert2=rest1/10;
            num=rest2*1000 + invert2*100 + invert1*10 + invert;

    }
    if (num>=10000 && num<100000){

            rest=num%10000;
            invert=num/10000;
            rest1=rest%1000;
            invert1=rest/1000;
            rest2=rest1%100;
            invert2=rest1/100;
            rest3=rest2%10;
            invert3=rest2/10;
            num=rest3*10000 + invert3*1000 + invert2*100 + invert1*10 +invert;

    }
    return num;
}
/*
 Q6 = ocorr�ncia de um n�mero em outro
 @objetivo
    Verificar quantidade de vezes da ocorr�ncia de um n�mero em outro
 @entrada
    Um n�mero base (numerobase) e um n�mero de busca (numerobusca).
 @saida
    Quantidade de vezes que n�mero de busca ocorre em n�mero base
 */
int q6(int numerobase, int numerobusca)
{
    int aux, aux1, qtdOcorrencias =0,tam = 1;

	aux = numerobusca;
        
        while (aux != 0){
            
            tam = tam * 10;
            aux = aux/ 10;
	}

	aux = numerobase;

	    while (aux != 0){
            if (aux % tam == numerobusca){

                qtdOcorrencias++;
                aux = aux/tam;
    }   
        else
	            aux =aux/10;
	}
    
    return qtdOcorrencias;
}

void usarData(char *datar, int *usarDia, int *usarMes, int *usarAno){
   
    char dia[3], mes[3], ano[5]; 
    int tam, i, k, j = 0, contBarra=0;
	
    // quebra a data
    for (i=0;  datar[i]!='/'; i++)
        dia[i] = datar[i];
    for (i=i+1;  datar[i]!='/'; i++){
        mes[j] = datar[i];
        j++;
    }
    j=0;
    
    for (i=i+1; i <= tam; i++ ){
        ano[j]=datar[i];
        j++;
    }
    
	// Converte dia mes e ano em inteiros    
    int intDia = *usarDia = atoi(dia);
    int intMes = *usarMes = atoi(mes);
    int intAno = *usarAno = atoi(ano);
 	
            }

