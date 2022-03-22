#include <stdio.h>
int main(){
    int arr[5][5], i, j, r, c, row[10], col[10], n, val[10], k = 0;
    printf("Enter how many row in 2D:");
    scanf("%d", & r);
    printf("Enter how many columns in 2D:");
    scanf("%d", & c);
    printf("Enter %d x %d array elements.....\n", r, c);
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("Enter element[%d][%d]:", i + 1, j + 1);
            scanf("%d", & arr[i][j]);
        }
    }
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            if(arr[i][j] != 0){
                row[k] = i + 1;
                col[k] = j + 1;
                val[k] = arr[i][j];
                k++;
            }
        }
    }
    printf("Your matrix in sparse matrix form....\n");
    printf("Element No\tRow\tColumn\tValue\n");
    for(i = 0; i < k; i++){
        printf("%d\t\t\t%d\t\t%d\t\t%d\n", i + 1, row[i], col[i], val[i]);
    }
    return 0;
}