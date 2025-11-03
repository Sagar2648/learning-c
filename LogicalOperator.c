#include <stdio.h>

int main() {

    // Logical Operators = Used to combine or modify boolean expressions.

    // && = AND 
    // || = OR
    // ! = NOT

    int temp = 20;

    if(temp > 0 && temp < 30) {
        printf("The temperature is good.");
    }
    else{
        printf("The temperature is bad.");
    }

    return 0;
}