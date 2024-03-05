#include<stdio.h>

void star()
{
    int i,j;
    for(i=0;i<=10;i++)
    {
        for(j=0;j<=i;j++)
        printf("* ");
      printf("\n");
    }
    printf("\n");
    printf("\n");
}

void pyramid()
{
    int i,j,k;
    for(i=0;i<10;i++)
    {
        for(j=0;j<2*(10-i)-1;j++) 
            printf(" ");

        for(k=0;k<2*i+1;k++) 
            printf("* ");
        printf("\n");
    }
    printf("\n");
    printf("\n");
}

pyramid2()
{
    int i,j,k;
    
    for(i=0;i<10;i++)
    {
        for(j=0;j<2*i+1;j++) 
            printf(" ");

        for(k=0;k<2*(10-i)-1;k++) 
            printf("* ");
        printf("\n");

    }
    for(i=2;i<10;i++)
    {
        for(k=0;k<2*(10-i)+1;k++) 
        {
            printf(" ");
        }
        for(j=2;j<2*i+1;j++) 
        {
           
            printf("* ");

        }
            
        printf("\n");

    }
printf("\n");
}

void box()
{
    int i,j;
    for(i=0;i<=10;i++)
    {
        for(j=0;j<=10;j++) 
        {
            if(i==0||j==0||i==10||j==10||(j==i)||(j==10-i))
                printf("* ");
            else
              printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
}

void diamond()
{
    int i,j,k;
    for(i=0;i<=4;i++)
    {
        for(k=0;k<=2*(4-i);k++)
           printf(" ");

        for(j=0;j<2*i+1;j++)
        {
            if(j==0)
               printf("* ");
            else
             printf(" ");
        }
        printf("\n")  ;
    }
    for(i=0;i<=4;i++)
    {
        for(k=0;k<2*i+3;k++)
           printf(" ");

        for(j=0;j<2*(4-i)-1;j++)
        {
           if(j==0)
             printf("* ");
            else
            printf(" ");
        }
        printf("\n")  ;
    }

}

int main()
{
    star();
    pyramid();
    pyramid2();
    box();
    diamond();

return 0;
}
