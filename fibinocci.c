#include<stdio.h>
int main()
{
    int a=0 ,b=1;
    printf("%d %d ",a,b);
    for(int i=2;i<=10;i++)
    {
        int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}