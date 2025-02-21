#include <stdio.h>
#include <stdlib.h>
#define LENGTH 20

typedef struct{
    int count;
    int arr[LENGTH];
    int x;
    int pos;
}ins;


void insert(ins *A);



int main(){

    ins a;
    ins *p = &a;
    
    
    printf("Enter the number of elements: ");
    scanf("%d", &p->count);
    
    printf("Enter elements:\n");
    

    for (int i = 0; i < p->count; i++){
        scanf("%d", &p->arr[i]);
    }
    printf("What number to insert: ");
    scanf("%d", &p->x);
    printf("What index to insert: ");
    scanf("%d", &p->pos);

    insert(p);

}

void insert(ins *A){

  
    if (A->count < LENGTH){

        
            for (int i = A->count; i > A->pos; i--){
                A->arr[i] = A->arr[i - 1];

            }
            A->arr[A->pos] = A->x;
            A->count++;
    }

    for (int j = 0; j < A->count; j++){
        printf("%d", A->arr[j]);
    }
}