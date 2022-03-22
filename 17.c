#include <stdio.h>

int main(){
    int i, j, min, n, a[10], temp;
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
    for(i = 0; i < n - 1; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("\nArray elements after sort....\n");
    for(i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}