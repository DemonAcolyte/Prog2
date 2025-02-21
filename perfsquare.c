#include <stdio.h>
#include <math.h>

int array(int arr[], int size);
int perf(int x);
int main()
{
    
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    
    for (int i = 0; i < n; i++){
        
        scanf("%d", &arr[i]);
    }
    
    array(arr, n);
    
    
}

int perf(int x){
    
    int sq = sqrt(x);
    
    return (sq * sq == x)? 1 : 0;
}

int array(int arr[], int size)
{
    
    int temp, result;
    
    printf("Perfect square elements in the array: ");
    
    for (int i = 0; i < size; i++){
        
        temp = arr[i];
        result = perf(temp);
        if (result == 1){
            printf("%d ", arr[i]);
        }
    }

}