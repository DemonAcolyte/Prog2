#include <stdio.h>



//Nametype, StudentType, StudentArr, StudentList
#define LENGTH 50
typedef struct{

    char fname[24];
    char mi;
    char lname[15];
}Nametype;

typedef struct{
    
    Nametype name;
    char Course[10];
    int ID;

}StudentType;




int main(){

    StudentType StudArr[LENGTH];

    int count;

    printf("Input for: ");

    scanf("%d", &count);
    printf("Input ID: ");
    scanf("%d", &StudArr[count].ID);
    printf("Enter first name: ");
    scanf("%s", &StudArr[count].name.fname);

    printf("%d", StudArr[count].ID);
    printf("%s", StudArr[count].name.fname);




}