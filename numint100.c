#include <stdio.h>

int main ()
{
    int num;
    num = 1;
    while(num < 101)
    {
        printf("%d - ", num);
        num = num + 1;
    }
    return 0;
}