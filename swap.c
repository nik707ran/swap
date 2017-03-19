#include <stdio.h>

int main(void)
{
    int x = 31;
    int y = 44;
    
    printf("X is 31\n");
    printf("Y is 44\n");
    
    //swapping
    int temp = x;
    x = y;
    y = temp;
    
    
    printf("X is now %d \n",x);
    printf("Y is now %d \n",y);
    
}