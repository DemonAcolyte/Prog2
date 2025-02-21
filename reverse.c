#include <stdio.h>
#include <stdlib.h>

int *reverseArray(int arr[], int size);
int main(){

    int arr[] = {3, 4, 5, 6};
    int *new;
    new = reverseArray(arr, 4);
    for (int i = 0; i < 4; i++){
        printf("%d ", new[i]);
    }
}
int *reverseArray(int arr[], int size){
    int *rev = (int *)malloc(sizeof(int) * 4);
    int temp;
    for (int i = 0; i < 4; i++){
        temp = arr[size - i - 1];
        rev[i] = temp;

    }

    return rev;
}