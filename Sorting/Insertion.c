#include <stdio.h>
#include "Functions.c"

int main(){

    int arr[] = {4, 1, 7, 3, 2};
    int count = 5;
    int temp;
    int j;
    for (int i = 1; i < count; i++){
        temp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > temp; j--){
            
               arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
    for (int i = 0; i < count; i++){
        printf("%d ", arr[i]);
    }
}