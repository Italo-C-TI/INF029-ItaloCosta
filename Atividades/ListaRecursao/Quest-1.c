#include <stdio.h>

int fatorial(int n)
{ 
    int fat = 1,i;
     
      if(n<1)
        fat=1;
      
      else{
        for (i=2; i <= n; i++)
            fat = fat * i ;
      }
    return fat;
}

