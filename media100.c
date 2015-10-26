#include <stdio.h>

int main()
{
    int num,media;
    media=0;
    
   for(num=0;num<=100;num++)
    {
    media=media+num;

    }
    media=media/100;
    printf("Media %d ", media);
    
    return 0;
}