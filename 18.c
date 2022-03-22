#include <stdio.h>

int main(){
    int i, j, n, a[10], value;
    printf("Enter your array limit:");
    scanf("%d", & n);
    printf("Enter %d array elements....\n", n);
    for(i = 0; i < n; i++){
        printf("Enter element [%d]:", i + 1);
        scanf("%d", & a[i]);
    }
    printf("Array elements before sort....\n");
    for(i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    for(i = 1; i < n; i++){
        value = a[i];
        for(j = i - 1;((j >= 0) && (a[j] > value)); j--){
            a[j + 1] = a[j];
        }
        a[j + 1] = value;
    }
    printf("\nArray elements after sort....\n");
    for(i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}