void imprimiCrescente(int num){
    if(num >= 0)
    {   imprimeCrescente(num - 1);
    	printf("%i ", num);
    }

}