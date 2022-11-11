#include<stdio.h>
int main()
{
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    x & 1 ? printf("odd number"): printf("even number");
    return 0;
}