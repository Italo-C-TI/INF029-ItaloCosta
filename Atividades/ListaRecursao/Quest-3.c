#include <stdio.h>

int questao3(int num){
    if(num>=0 && num<10) 
        return num;
    else {
        printf("%d", num % 10);
        num = num / 10;
        return questao3(num);
    }
}

int main(){
    printf("%i\n",questao3(123));
    printf("%i\n",questao3(1450));
    printf("%i\n",questao3(5));
}