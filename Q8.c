#include<stdio.h>
int power(int n,int m){
    if(n==0)
    return 0;
    if(m==0)
    return 1;
    return n*power(n,m-1);    
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int m;
    printf("enter power:");
    scanf("%d",&m);
    printf("%d",power(n,m));
    return 0;

    
}