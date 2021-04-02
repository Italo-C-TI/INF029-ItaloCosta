#include <stdio.h>
	
fatorial( int n){
	if ((n==1) || (n==0)) 
		return 1;
	else
		return fatorial(n-1)*n;
		
}

	main () {
		int n;								

			printf("Informe o numero que deseja obter o fatorial:\n");
			scanf("%d",&n);
	
	if (n>12||n<0)
		printf("valor impossivel de calcular ou nao suportavel\n");
    else
	printf("O fatorial de %d eh %d \n",n,fatorial(n));
}
