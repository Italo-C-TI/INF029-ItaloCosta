void imprimeDecrescente(int num){
    if(num >= 0){
    	printf("%i ", num);
    	imprimiDecrescente(num - 1);
    }
}