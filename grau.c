#include <stdio.h>

int main ()
{
   float cel,far;
   printf ("digite graus celcius\n");
   scanf ("%f", &cel);
   far = (1.8* cel) + 32;
   printf ("em fahrenheit são %.2f",far);
                
    return 0;
}