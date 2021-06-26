int potencia(int k, int n) {
	if(n > 0){
		return k * potencia(k, n - 1);
    }else{
        return 1;
	}