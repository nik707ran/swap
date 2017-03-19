#include <stdio.h>

void swap(int* a,int* b);

int main(void)
{
    int x = 31;
    int y = 44;
    
    printf("X is 31\n");
    printf("Y is 44\n");
    
    //swapping
    swap(&x,&y);
    
    
    printf("X is now %d \n",x);
    printf("Y is now %d \n",y);
    
}
void swap(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}