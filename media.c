#include<stdio.h>

int main ()
{
   float AV1,AV2,media;
   printf ("digite AV1\n");
   scanf ("%.2f", &AV1);
   printf ("digite AV2\n");
   scanf ("%.2f", &AV2);
   media =(AV1+AV2)/2;
   if (media >=6)
   
            printf ("VOCE FOI APROVADO SUA MEDIA FINAL E %.2f", media);
   
   else
   
            printf ("VOCE FOI REPROVADO SUA MEDIA FINAL E %.2f", media);
           
    return 0;
}