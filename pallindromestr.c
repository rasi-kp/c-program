#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,l,h;
    printf("Enter the word :");
        scanf("%s",a);
    l=0;
    h=strlen(a)-1;
    while (h > l)
    {
        if (a[l++] != a[h--])
        {
            printf("%s is not a palindrome\n", a);
            break;
        }

    printf("%s is a palindrome\n", a);
}
}