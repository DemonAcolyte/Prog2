#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Functions.c"

int *bubbleSort(int arr[], int count);
void display(int arr[], int count);
int main(){

    int arr[] = {90, 1, 3, 2, 6};
    int count = 5;

    int *new = bubbleSort(arr, count);
    
    display(new, count);
    
}

int *bubbleSort(int arr[], int count){
    int ctr, ndx;
    int sizeCount = count;
    int *sorted = (int*)malloc(sizeof(int)*count);
    for (ctr = 0; ctr < count; ctr++){
        for (ndx = 0; ndx < count - 1; ndx++){
            if (arr[ndx] > arr[ndx+1]){
                swap(&arr[ndx], &arr[ndx+1]);
            }
        }
        count--;
    }
    //hello
    memcpy(sorted, arr, sizeof(int)*sizeCount);
   
    return sorted;
}
void display(int arr[], int count){
    for (int i = 0; i < count; i++){
        printf("%d ", arr[i]);
    }
}