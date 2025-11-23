#include<stdio.h>
int divide(int dividend,int divisor){
    int q=0;
    while (dividend>=divisor)
    {
        dividend-=divisor;
        q++;
    }
    return q;
    
}
int main(){
    int dividend,divisor,q,r;
    printf("Enter dividend: ");
    scanf("%d",&dividend);
    printf("\nEntr divisor: ");
    scanf("%d",&divisor);
    int og_dividend=dividend;
    q=divide(dividend,divisor);
    r=og_dividend-divisor*q;
    printf("\nQuotient=%d",q);
    printf("\nRemainder=%d",r);
}