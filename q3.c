/*Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.*/

#include<stdio.h>
int main(){
    int n ,k , com = 0,found= 0;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];  
    printf("enter the elements of the array:");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }   
    printf("enter the key to be searched:");
    scanf("%d",&k); 
    
    for(int i = 0;i<n;i++){
        com += 1 ;
        if(arr[i]==k){
            printf("element found  at index %d\n",i);
            found = 1;
            break;
        }
        
    }
    if(found = 0){
        printf("not found\n");

    }
    printf("the number of comparisons performed is :%d\n",com );
    


return 0;
}