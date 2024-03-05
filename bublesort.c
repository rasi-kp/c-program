#include<stdio.h>

void bubblesort(int a[],int n){
    int i,j,t;
    for(i = 0 ; i < n-1 ; i++ ) {
        for (j=i+1 ; j < n-i-1 ; j++){
            if(a[i]>a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
int main(){
    int n,a[10];
    printf("Enter the limit :");
    scanf("%d",&n);
    printf("\nEnter the Number :");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    printf("\nSorted Numbers are :");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}
