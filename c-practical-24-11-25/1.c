#include<stdio.h>
int diagonalsum(int a[10][10],int i,int n){
    if(i==n)
        return 0;
    return a[i][i]+a[i][n-i-1]+diagonalsum(a,i+1,n);
}
int main(){
    int n,a[10][10];
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    printf("\nEnter matrix elements:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int totalsum=diagonalsum(a,0,n);
    printf("\nSum of both diagonals=%d",totalsum);
}