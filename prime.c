#include<stdio.h>
int main()
{
    int n,flag=1;
    printf("Enter the no");
    scanf("%d",&n);
    for(int i=2 ;i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
       printf("no is prime no");
    else
       printf("no is not prime");
}