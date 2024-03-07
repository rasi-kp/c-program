void Babblesort(int a[],int n){
    int i,j,t;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
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