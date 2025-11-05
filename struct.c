#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct 
{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

void printStudent(Student student);

int main(){

    /* struct = A custom container that holds multiple
                pieces of related information.
                Similar to Objects in other languages*/

    Student student1 = {"Spongebob", 30, 3.5, true};
    Student student2 = {"Patrick", 36, 2.5, false};
    Student student3 = {0};

    strcpy(student3.name, "SquirdWard");
    student3.age = 48;
    student3.gpa = 4.0;
    student3.isFullTime = true;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);

    return 0;
}

void printStudent(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("FULL-TIME: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}