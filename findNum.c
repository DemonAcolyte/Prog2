#include <stdio.h>


typedef enum{TRUE, FALSE} boolean;

int findNum(int arr[], int size, int x);
int main()
{
   int size = 4;
   int arr[] = {5, 7, 4};
   int x = 1;

   int result = findNum(arr, size, x);

   if (result == 1){
      printf("Found");
   }else
   {
      printf("Not Found");
   }
   
}

int findNum(int arr[], int size, int x){

   int ctr;
   
   for (ctr = 0; ctr < size  && arr[ctr]!=x; ctr++){}

    return (ctr != size)? 1 : 0;
}