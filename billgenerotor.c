#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct items
{
    char name[20];
    float price;
    int qty;
};
struct orders
{
    char customer[20];
    char date[20];
    int noofitems;
    struct items itm[20];
};

void generatehead(char name[20],char date[20])
{
    printf("\n\n");
    printf("\n\t   Rasi Restaurant");
    printf("\n\t....................................");
    printf("\nDate: %s",date);
    printf("\nInvoice To: %s",name);
    printf("........................................");
    printf("\n");
    printf("item\t\t");
    printf("Qty\t\t");
    printf("Total\t\t");
    printf("\n......................................");
    printf("\n\n");
}

void generatebody(char name[20],int qty,int price)
{
    printf("%s\t\t",name);
    printf("%d\t\t",qty);
    printf("%.2f \t\t",qty*price);
    printf("\n");

}

void generatefooter(float total)
{
    printf("\n");
    float dis=0.1*total;
    float nettotal=total-dis;
    float cgst=0.09*nettotal;
    float gradtotal=nettotal+ 2*cgst;
    printf("......................................");
    printf("Sub Total\t\t\t%.2f",total);
    printf("\nDiscount @10 %s\t\t\t%.2f","%",dis);
    printf("\n\t\t\t\t..........");
    printf("\n NetTotal\t\t\t%.2f",nettotal);
    printf("\nCGST @ 9 %s\t\t\t%.2f","%",cgst);
    printf("\nSGCT @ 9 %s\t\t\t%.2f","%",cgst);
    printf("\n...................................");
    printf("\nGRAND TOTALt\t\t%.2f","%",gradtotal);
    printf("\n...................................\n");
}
int main()
{
    int n,no,i;
    int total;
    //char name[];
    struct orders ord;
    //struct item it;
    printf("\n\n************ Rasi Resturant ***********\n");
    printf("========================================\n\n");
    printf(" 1. Generate Bill\n");
    printf(" 2. Show Bills\n");
    printf(" 3. Search Bils\n");
    printf(" 4. Exil\n\n");
    printf("Enter Your Choice : \n");
    scanf("%d",&n);
    fgetc(stdin);

    switch (n)
    {
    case 1: printf("Enter the Name of Customer : ");
            fgets(ord.customer,50,stdin);
            strcpy(ord.date,__DATE__);
            printf("Pls Enter the no of items : ");
            scanf("%d",&no);
            ord.noofitems=no;
            for(i=0;i<no;i++)
            {
                fgetc(stdin);
                printf("\n\n");
                printf("Enter the %d item:",i+1);
                fgets(ord.itm[i].name ,20,stdin);
                printf("\nPls Enter the quality :");
                scanf("%d",&ord.itm[i].qty);
                printf("\nPls Enter the unit prize :");
                scanf("%d",&ord.itm[i].price);
                total += ord.itm[i].qty*ord.itm[i].price;
            }
            generatehead(ord.customer,ord.date);
            for(i=0;i<ord.noofitems;i++)
            {
                generatebody(ord.itm[i].name,ord.itm[i].qty,ord.itm[i].price);
                
            }
            generatefooter(total);
            break;
    /*case 2: show();
        break;
    case 3: search();
        break;
    case 4: generate();
        break;
    */
    default:printf("Envalied Input");
        break;
    }


    return 0;
}