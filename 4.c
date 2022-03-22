#include <stdio.h>
int main(){
    int n1, n2, i, arr1[20], arr2[20], j;
    printf("Enter first array limit:");
    scanf("%d", &n1);
    printf("Enter first array elements.....\n");
    for(i = 0; i < n1; i++){
        printf("Enter Element[%d]:", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter Second array limit:");
    scanf("%d", &n2);
    printf("Enter Second array elements.....\n");
    for(i = 0; i < n2; i++){
        printf("Enter Element[%d]:", i+1);
        scanf("%d", &arr2[i]);
    }
    for(i = n1, j = 0; j < n2; i++, j++){
        arr1[i] = arr2[j];
    }
    printf("\nMerged array elements are....\n");
    for(i = 0; i < n1 + n2; i++){
        printf("%d\t", arr1[i]);
    }
    return 0;
}