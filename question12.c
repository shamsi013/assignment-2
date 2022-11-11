#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter three number:");
    scanf("%d",&x);
    y = x % 10;
    x = x / 10;
    y = y * 100;
    z = y + x;
    printf("rotate digits by one position towards the right is %d",z);
    return 0;
}