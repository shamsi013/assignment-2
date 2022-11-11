#include<stdio.h>
int main()
{
    int x,y;
    printf("enter a number and a digit:");
    scanf("%d %d",&x,&y);
    y = y*10;
    y = y+x;
    printf("append a digit =%d",y);
    return 0;
}