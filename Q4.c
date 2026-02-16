/*Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the reversed array, space-separated*/
#include<stdio.h>
int main(){
    int n =0;
    //key points - dont not use another array , modify the same array , use constant extra space 


    printf("enter  numbers of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array:");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int left = 0;

    int right = n-1;
    while(left<right){
        int temp = arr[left];
        arr[left]=arr[right];
        arr[right]= temp;
        left++;
        right--;
    }
    
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}





