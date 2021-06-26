int somarVetor(int vet[], int tam) {
	if(tam == 0) 
    {
        printf("Vetor vazio\n");
		return 0;
	}else
    {
	    return vet[tam - 1] + somarVetor(vet, tam - 1);
    }
    
}