#include <stdio.h>
int recursiveSearch(int arr[], int l, int r, int x);
int main(){
    int arr[10], n, i, result, x;
    printf("Enter Array Limit:");
    scanf("%d", &n);
    printf("Enter n elements in sorted order....");
    for(i = 0; i < n; i++){
        printf("\nEnter Element [%d]:", i+1);
        scanf("%d", &arr[i]);
    }
    n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter Element to Search:");
    scanf("%d", &x);
    result = recursiveSearch(arr, 0, n - 1, x);
    if(result == -1){
        printf("%d is not present in array", x);
    }else{
        printf("%d is present at Location %d", x, result+1);
    }
    return 0;
}
int recursiveSearch(int arr[], int l, int r, int x){
    while(r >= 1){
        int mid = l+(r - l)/2;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] > x){
            return recursiveSearch(arr, l, mid - 1, x);
        }else{
            return recursiveSearch(arr, mid + 1, r, x);
        }
    }
    return -1;
}
