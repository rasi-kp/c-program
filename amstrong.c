#include<stdio.h>
int main()
{
    int i,j,l,h,rem,mul,temp,sum=0;
    printf("Enter the Low Limit :");
    scanf("%d",&l);
    printf("Enter the Higher Limit :");
    scanf("%d",&h);
    for(j=l;j<h;j++)
    {
        temp=j;
        mul=0;
        sum=0;
        for(i=j;i>0;i=i/10)
        {
        rem=i%10;
        mul=rem*rem*rem;
        sum=sum+mul;
        }
        if(temp==sum)
           printf("%d \n",temp);

    }
}