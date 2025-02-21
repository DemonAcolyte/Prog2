#include <stdio.h>
#include <string.h>


int main(){

    int arr[] = {4, 3, 5, 6};
    int arr1[4];

    memcpy(arr1, arr, sizeof(arr));

    for (int i = 0; i < 4; i++){

        printf("%d ", arr1[i]);
    }
    

}