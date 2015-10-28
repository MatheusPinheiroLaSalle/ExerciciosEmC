#include <stdio.h>

int main()
{
    int num;
    int bin[10];
    int i, resto,j;
    
    printf("\n Entre com inteiro:");
    scanf("%d", &num);
    
    while(num != 0)
    {
        resto = num % 2;
        bin[i] = resto;
        i++;
        num = num / 2;
    }
    for(j=i-1; j>=0; j--)
    {
        printf("%d", bin[j]);
    }
    printf("\n");
  
    }
 return 0;  
}
 