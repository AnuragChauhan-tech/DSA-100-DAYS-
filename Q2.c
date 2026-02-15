//Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.
#include<stdio.h>
int main(){
    int n ;
    int index = 0;
    

    printf("enter  numbers of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array:");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int r;
    int e;

    printf("enter the index of the elment to be removed:");
    scanf("%d",&r);
    printf("enter the element:");
    scanf("%d",&e);
    for(int i =0;i<n;i++){

        if(arr[i]== e ){
            index = i;


        }
        

    }
    for(int i = index;i<n-1;i++){
        arr[i]=arr[i+1];

    }
    n--;
    printf("the new array is:");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);

    }

    return 0;




}