#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {

        char fname[24];
        char MI;
        char lname[16];
        int age;
        char gender;

    }student;



void display(student x);

int main(){
    
    input();
    
}

student input(){
    
    student personal;

    printf("First Name: ");
    fgets(personal.fname, sizeof(personal.fname), stdin);
    personal.fname[strcspn(personal.fname, "\n")] = '\0';

    printf("Middle Initial: ");
    scanf(" %c", &personal.MI);
    while (getchar() != '\n');

    printf("Last name: ");
    scanf(" %[^\n]s", &personal.lname);
    
    printf("Age: ");
    scanf(" %d", &personal.age); 

    printf("Gender M or F: ");
    scanf(" %c", &personal.gender);

    printf("\n");
    
    display(personal);
}

void display(student check){
    printf("\\Student Information\\\n");

    printf("\n");

    printf("Full Name: %s %c %s", check.fname, check.MI, check.lname);
    printf("Age: %d\n", check.age);
    printf("Gender: %c", check.gender);
}
