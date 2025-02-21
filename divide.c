#include <stdio.h>
#include <stdlib.h>

void divide(int arr[], int size, int *negCount);

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){

    int arr[] = {-1, 5, 7, 8, -7};
    int size = 5;
    int negCount;
   
    divide(arr, size, &negCount);




}

void divide(int arr[], int size, int *negCount){

    *negCount = 0;

    for (int i = 0; i < size; i++){
        if(arr[i] < 0) {
            (*negCount)++;
        }
    }

    int *negatives = (int*)calloc(*negCount, sizeof(int));
    //int *new = (int*)realloc(initial, sizeof(int)*count);
    int index = 0;
    int i;
    for (i = 0; i < size; i++){
        
            if (arr[i] < 0){
                negatives[index++] = arr[i]; 
                
            }
            
    }
     
    
   

    for (int j = 0; j < *negCount; j++){
        printf("%d ", negatives[j]);
    }
    free(arr);
    for (int k = 0; k < size; k++){
        printf("%d ", arr[k]);
    }
}