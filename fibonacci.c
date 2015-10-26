#include <stdio.h>

int main()
{
    int nums,numa,num;
    nums=0;
    numa=1;
    num=0;
    
   for(numa=1;numa<=10000;)
    {
    
    num=numa+nums;
    numa=nums;
    nums=num;
    
    printf(" %d ", nums);
    
   
    }
    
    
    return 0;
} 