#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age){
    printf("\n Happy birthday to you!");
    printf("\n Happy birthday to you!");
    printf("\n Happy birthday dear %s!", name);
    printf("\n Happy birthday to you!");
    printf("\n You are %d years old!", age);
}

int main () {

    /* Function =  A reusable section of code that can be invoke "called
      Arguments can be sent to a function so that it can use them "*/
    
    char name[50] = "";
    int age = 0;

    printf("Enter your name:");
    fgets(name, sizeof(name), stdin);
    name [strlen(name) -1 ] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);

    return 0;
}