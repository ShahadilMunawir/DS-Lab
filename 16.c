#include <stdio.h>

int main(){
    int i, j, temp, n, a[10];
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
        for(j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nArray elements after sort....\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}