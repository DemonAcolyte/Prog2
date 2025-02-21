#include <stdio.h>
#include <stdlib.h>

int *alloc(int arr[], int size);
int main(){

    
    int size;

    printf("Enter allocation: ");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++){
       scanf("%d", &arr[i]);
    }

    int *capture = alloc(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", capture[i]);
    }
    
    free(capture);

    
}
int *alloc(int arr[], int size){

    int *cap = (int*)calloc(size, sizeof(int));

    if (cap == NULL){
        printf("Error: Memory Allocation Failed");
    }
    else{
    for (int i = 0; i < 6; i++){

        cap[i] = arr[i];
    }
    }
    return cap;

}