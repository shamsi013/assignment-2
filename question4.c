#include<stdio.h>
int main()
{
    int a = 10 , b = 16;
    a = a + b;
    b = a - b; 
    a = a - b;
    printf("swap value of a=%d and b=%d",a,b);
    return 0;
    
}
