#include <stdio.h>
#include <cs50.h>

void swap(int* a,int* b);

int main(void)
{
    int x = get_int();
    int y = get_int();
    
    printf("X is %d\n",x);
    printf("Y is %d\n",y);
    
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