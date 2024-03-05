void Babblesort(int a[],int n){
    int i,j,t;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
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
    Babblesort(a,n);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}