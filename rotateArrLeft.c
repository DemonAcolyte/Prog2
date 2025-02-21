#include<stdio.h>


int revarr(int arr[], int size);

int main(){

    int arr[] = {1, 3, 4, 5};
    int size = 4;

    revarr(arr, size);

}

int revarr(int arr[], int size){

    int temp = arr[0];

    for (int i = 0; i < size; i++){

        arr[i] = arr[i+1];

    }
    arr[size - 1] = temp;
    for (int j = 0; j < size; j++){
        printf("%d ", arr[j]);
    }

}