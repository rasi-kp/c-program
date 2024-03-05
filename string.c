#include<stdio.h>

int main()
{
    char a[50];
    char o,n;
    printf("enter the character :");
    scanf("%s",a);
    printf("enter the replacing character :");
    scanf(" %c",&o);
    printf("enter the replaced character :");
    scanf(" %c",&n);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==o)
            a[i]=n;
    }
    printf("%s",a);
}

