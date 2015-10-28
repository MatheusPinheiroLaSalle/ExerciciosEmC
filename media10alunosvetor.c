#include <stdio.h>

int main()
{
    int i;
    float av1[10];
    float menor = 999;
    for(i=0;i<=9;i++)
    {
        printf("/n Entre com AV1 do aluno %d :", i+1);
        scanf("%f", &av1[i]);
        if (av1[i] < menor)
        {
            menor = av1[i];
        }
    }
    for(i=0;i<=9;i++)
    {
        if (av1[i] == menor)
        {
            printf("\n Hall das menores notas! Aluno %d ", i+1);
        }
    }
 return 0;  
}