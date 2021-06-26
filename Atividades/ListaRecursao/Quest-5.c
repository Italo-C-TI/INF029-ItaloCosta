int soma(int numero){
	if(numero > 0){
		return numero + soma(numero - 1);
	}else{
		return 0;
	}
}
