#include <stdio.h>


int sort(int arr[], int size);
int linear(int arr[], int size, int x);


int main(){

    int n;
    int ctr;
    int x, result;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");

    for (ctr = 0; ctr < n; ctr++){

        scanf("%d", arr + ctr);
        
    }

    sort(arr, n);
    for (int j = 0; j < n; j++){
        printf("%d ", arr[j]);
    }
    printf("\n");
    printf("Enter the value you want to find: ");
    scanf("%d", &x);
    result = linear(arr, n, x);

    if (result == 1){
        printf("FOUND");
    }
    else
    {
        printf("NOT FOUND");
    }
}

int sort(int arr[], int size){

    int temp;

    for (int i = 0; i < size - 1; i++){

        for (int j = 0; j < size - 1; j++)
        {
            if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i+1] = temp;
        }
        }
       
    }
    return *arr;
}
int linear(int arr[], int size, int x){

    int ctr;

    for (ctr = 0; ctr < size && arr[ctr] != x; ctr++){}

    return (ctr!=size)? 1:0;
    
}