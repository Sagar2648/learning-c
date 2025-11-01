#include <stdio.h>
#include <string.h>

int main() {

    int age;
    float gpa;
    char grade; 
    char name[30]; 

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("%d\n", age);
    printf("%.1f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0 ;
}