#include <stdio.h>

int main ()
{
    int num;
    num = 1;
    while(num < 100)
    {
        printf("%d - ", num);
        num = num + 2;
    }
    return 0;
}