#include <stdio.h>

void swap(int *x, int *y);
int findExchange(int arr[], int size);

int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    findExchange(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

}

int findExchange(int arr[], int size){
    int ctr;
    int smallNdx = 0;

    for (ctr = 1; ctr < size; ctr++){
        if (arr[smallNdx] > arr[ctr]){//3 > 2
            smallNdx = ctr;//2
        }
    }
    if(smallNdx != 0){
        swap(&arr[0], &arr[smallNdx]);
    }
    return smallNdx;
}
void swap(int *x, int *y){

    int temp;

    temp = *x;
    *x = *y;
    *y = temp; 
}