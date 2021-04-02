#include <stdio.h>

char *ler3Letras() {
	
    static char let[3];

    printf("Digite 3 letras:\n");
    scanf("%c%c%c", &let[0], &let[1], &let[2]);

    return let;
}
int main(){
	
    char *let;
    int i;

    let = ler3Letras();

    for(i = 0; i < 3; i++)
        printf("%c\n", let[i]);
    
	return 0;
}



