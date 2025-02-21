#include <stdio.h>



int linear(int arr[], int size, int x){

    int ctr;

    for (ctr = 0; ctr < size && arr[ctr] != x; ctr++){}

    return (ctr!=size)? 1:0;
    
}
void swap(int *x, int *y){

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}
