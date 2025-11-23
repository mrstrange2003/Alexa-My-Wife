#include<stdio.h>
#include<ctype.h>
int main(){
    char books[100][100];
    int n;
    char ch;
    int count=0;
    printf("Enter no of books: ");
    scanf("%d",&n);
    printf("Enter book titles:\n");
    getchar();
    for(int i=0;i<n;i++){
        fgets(books[i],100,stdin);
    }
    printf("\nEnter starting alphabet to search: ");
    scanf("%c",&ch);
    ch=tolower(ch);
    for(int i=0;i<n;i++){
        if (tolower(books[i][0])==ch)
        {
            count++;
        }
        
    }
    printf("\nNoof books starting with '%c' = %d", ch, count);


}