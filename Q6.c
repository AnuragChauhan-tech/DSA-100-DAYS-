#include <stdio.h>

int main(){
    int n;
    printf("Enter size of first array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int m;
    printf("Enter size of second array: ");
    scanf("%d", &m);

    int arr2[m];

    for(int i = 0; i < m; i++){
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0;

    while(i < n && j < m){
        if(arr[i] <= arr2[j]){
            printf("%d ", arr[i]);
            i++;
        } else {
            printf("%d ", arr2[j]);
            j++;
        }
    }

    while(i < n){
        printf("%d ", arr[i]);
        i++;
    }

    while(j < m){
        printf("%d ", arr2[j]);
        j++;
    }

    return 0;
}