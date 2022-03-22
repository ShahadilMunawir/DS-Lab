#include <stdio.h>
int main(){
    int arr[5][5], r, c, i, j, num, flag = 0;
    printf("Enter how many rows in your 2D:");
    scanf("%d", &r);
    printf("Enter how many columns in your 2D:");
    scanf("%d", &c);
    printf("Enter %d x %d 2D array elements....\n", r, c);
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("Enter element [%d][%d]:", i + 1, j + 1);
            scanf("%d", & arr[i][j]);
        }
    }
    printf("Enter number for search:");
    scanf("%d", &num);
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++) {
            if(num == arr[i][j]){
                printf("%d is found at position [%d][%d]\n", num, i + 1, j + 1);
                flag = 1;
            }
        }
    }
    if(!flag){
        printf("%d is not found in this array", num);
    }
    return 0;
}
