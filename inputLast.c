#include <stdio.h>
#include <stdlib.h>
void inputLast(int arr[],int *count, int x);
int main(){

    int arr[10] = {1, 2, 4, 7, 3};
    
    int x = 9;
    int count = 5;

    inputLast(arr, &count, x);

   


}
void inputLast(int arr[], int *count, int x){

    
        
        arr[*count] = x;// arr[5] = 9
        (*count)++;// 6
    for (int i = 0; i < *count; i++){
    printf("%d ", arr[i]);
   }
    
}