#include <stdio.h>
#include <stdlib.h>
void rotate(int arr[], int rots, int size);
int main(){
              //0  1  2  3  4  5 = index
   int arr[] = {1, 2, 3, 4, 5, 7};// new = 7, 1, 2, 3, 4 5
   int n = 6;
   int rota = 1;
    rotate(arr, rota, n);
}

void rotate(int arr[], int rots, int size){
  
    int temp = arr[size-1];// temp = 7

    for (int i = size-2; i >= 0; i--){// i = 5
       arr[i+1] = arr[i];// arr[i+1] = 5
      
    }
    arr[0] = temp;
    for (int j = 0; j < size; j++){
        printf("%d ", arr[j]);
    }
    
   
    
}






