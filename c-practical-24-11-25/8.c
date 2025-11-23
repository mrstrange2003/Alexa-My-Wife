#include<stdio.h>
int main(){
    char regno[50];
    char *start,*end;
    printf("Enter vehicle registration no: ");
    scanf("%s",regno);

    start=regno;
    end=regno;
    while (*end!='\0')
    {
        end++;
    }
    end--; //one step left of \0
    while (start<end)
    {
        if(*start!=*end){
            printf("\nNot palindrome");
            return 0;
        }
        start++;
        end--;
    }
    printf("Palindrome");


}