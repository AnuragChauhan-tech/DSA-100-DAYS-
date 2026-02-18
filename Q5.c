/*Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

Input:
- First line: integer p (number of entries in server log 1)
- Second line: p sorted integers representing arrival times from server 1
- Third line: integer q (number of entries in server log 2)
- Fourth line: q sorted integers representing arrival times from server 2)

Output:
- Print a single line containing all arrival times in chronological order, separated by spaces*/

#include<stdio.h>
int main(){
    int n , m ;
    
    

    printf("enter  numbers of elements of log1:");
    scanf("%d",&n);
    int log1[n];
    printf("enter the elements of log1:");
    for(int i = 0;i<n;i++){
        scanf("%d",&log1[i]);

    }

    printf("enter  numbers of elements of log2:");
    scanf("%d",&m);
    int log2[m];
    printf("enter the elements of log2:");
    for(int i = 0;i<n;i++){
        scanf("%d",&log2[i]);

    }
    int i , j;


    while(i < n && j < m){ 
        if(log1[i]<= log2[i]){
            printf("%d ",log1[i]);
                i++;

        }else{
            printf("%d ", log1[j]);
            j++;
        }

    }


    while(i<n){
        printf("%d ",log1[i]);
        i++;

    }

    while(j<m){
        printf("%d ",log2[j]);
        j++;
    }
    return 0;
    

}