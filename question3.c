#include<stdio.h>
int main()
{
    int a=10,b=16,temp;
    temp=a;
    a=b;
    b=temp;
    printf("swap value of a=%d and b=%d",a,b);
    return 0;
}