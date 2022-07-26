#include<stdio.h>
int main()
{
    int a=-1,b=1,c=0,n;
    printf("enter a number to print first nth term of fabonacii series\n");
    scanf("%d",&n);
    while(n>c)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        
    }
    return 0;
}