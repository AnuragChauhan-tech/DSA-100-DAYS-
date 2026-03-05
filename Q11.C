//Problem: Read a string and check if it is a palindrome using two-pointer comparison.


#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter a string:");
    scanf("%s",str);
    int end = strlen(str) - 1;
    int start = 0;
    while(start<end){
        if(str[start]!=str[end]){
            printf("not a palindrome");
            return 0;

        }else{
            start++;
            end--;

        }

    }
    printf("it is a palindrome");
    return 0;


}