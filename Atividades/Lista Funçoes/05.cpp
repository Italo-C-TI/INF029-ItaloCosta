#include <stdio.h>
typedef struct  {
    int num1;
    int num2;
    int num3;
    int num4;
} Numeros;

Numeros ler4Numeros() {
	
    Numeros nums;

    printf("NUMERO 1:\n");
    scanf("%d", &nums.num1);

    printf("NUMERO 2:\n");
    scanf("%d", &nums.num2);

    printf("NUMERO 3:\n");
    scanf("%d", &nums.num3);

    printf("NUMERO 4:\n");
    scanf("%d", &nums.num4);

    return nums;
}
int main(){
	
    Numeros nums = ler4Numeros();
    printf("Numero inserido:: %i\n",nums.num1);
    printf("Numero inserido:: %i\n",nums.num2);
    printf("Numero inserido:: %i\n",nums.num3);
    printf("Numero inserido:: %i\n",nums.num4);

    return 0;
}

