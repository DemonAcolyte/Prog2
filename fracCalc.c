#include <stdio.h>
#include <stdlib.h>

int *multFrac(int a[], int b[]);
int main(){

    int a[] = {1,2};
    int b[] = {2,3};

    int *C = multFrac(a, b);

    for (int i = 0; i < 4; i++){
        printf("%d ", *(C+i));
    }
    
}
int *multFrac(int a[], int b[]){

    int *c = (int*)malloc(sizeof(int)*2);

    c[0] = a[0] * b[0];
    c[1] = a[1] * b[1];
    c[2] = 3;
    c[3] = 6;

    return c;
}