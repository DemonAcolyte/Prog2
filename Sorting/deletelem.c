#include <stdio.h>
#include "Functions.c"
#define LENGTH 50
void delete(int arr[], int *count, int elem);



int main(){
    int count, elem, result;
    printf("Enter the number of elements: ");
    scanf("%d", &count);
    int arr[count];
    printf("Enter array elements:\n");
    for (int i = 0; i < count; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to delete: ");
    scanf("%d", &elem);
    result = linear(arr,count,elem);
    if(result){
        delete(arr, &count, elem);
    }
    else printf("Not found");

}

void delete(int arr[], int *count, int elem){

    int ctr;
    int ndx;
    for (ctr = 0; ctr < *count; ctr++){
        if (arr[ctr] == elem){
            
            ndx = ctr;
        }
    }
    
        for (int i = ndx; i < *count; i++){

            swap(&arr[i], &arr[i+1]);
        }
        (*count)--;
        for (int i = 0; i < *count; i++){
            printf("%d ", arr[i]);
        }
    
    
}
 

