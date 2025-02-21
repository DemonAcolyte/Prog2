#include <stdio.h>

int findSmallest(int arr[], int size);
int main(){

    int n, result;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    result = findSmallest(arr, n);

    printf("The smallest number would be: %d", result);
}

int findSmallest(int arr[], int size){

    int smallest = arr[0];
    int ctr;

    for (ctr = 1; ctr < size; ctr++){
        if (arr[ctr] < smallest){
            smallest = arr[ctr];
        }

    }

    return smallest;
}