#include<stdio.h>
void insersort(int a[],int n){
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
int main(){
    int n ,a[10];
    printf("Enter the limit :");
    scanf("%d",&n);
    printf("Enter the noes :");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    insersort(a,n);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
