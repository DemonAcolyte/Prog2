#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}
int *sort(int arr[], int size);

int main(){
    
    int arr[] = {5, 2, 1, 9, 2};
    int n = 5;

    int *Cat = sort(arr, n);

    for (int i = 0; i < n; i++){
        printf("%d ", Cat[i]);
    }
    free(Cat);
}

int *sort(int arr[], int size){

    int *catch = (int *)calloc(size, sizeof(int));
    
    int smallndx;
    int count = 0;
    for (int i = 0; i < size - 1; i++){  
        smallndx = i;
        for (int j = i + 1; j < size; j++){
        if (arr[smallndx] > arr[j]){
            
            smallndx = j;
            
        }
    }
        swap(&arr[i], &arr[smallndx]);
        
        
    }
    memcpy(catch, arr, sizeof(int)*size);

   return catch;
}