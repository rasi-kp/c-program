#include<stdio.h>
int main()
{
    int i,n,rem,rev;
    printf("Enter the no :");
    scanf("%d",&n);
    for(int j=n;j>0;j++)
    {
        int temp=j;
        rev=0;
        for(i=j; i>0 ;i=i/10)
        { 
            rem=i%10;
            rev=(rev*10)+rem;
        }
        if(rev==j)
        {
            printf("%d is pallindrome ",temp);
            break;
        }
        
    }
     
}