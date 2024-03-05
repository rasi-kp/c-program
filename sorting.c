#include<stdio.h>

void sort(int a[],int n)
{ 
    for(int i=0;i<n-1;i++)
    {
        int max=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[max])
              max=j;
        }
        int temp=a[i];
        a[i]=a[max];
        a[max]=temp;
    }
    printf("\n");
    for(int i=0;i<n;i++)
       printf("%d ",a[i]);
}

int main()
{
    int n,a[5];
    printf("Enter the Limit :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
    sort(a,n);  
}