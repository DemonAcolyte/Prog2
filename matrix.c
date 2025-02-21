#include <stdio.h>

void matrix(int size, int arr[size][size]);

int main(){

    int n;
    int i, j;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n][n];
    for (i = 1; i <= n; i++){

        for(j = 1; j <= n; j++)
        {
            printf("Enter the element in [%d][%d] position: ", i, j);
            scanf("%d", &arr[i][j]);
        }

    }
    matrix(n, arr);

}

void matrix(int size, int arr[size][size]){

    for (int i = 1; i <= size; i++){

        for(int j = 1; j <= size; j++){
            
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}