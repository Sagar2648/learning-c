#include <stdio.h>
#include <stdbool.h>

int main(){

    // variable = A resuable container for a value. Behaves as it were the value it contains.

    int age = 25;
    int year = 2025;
    int quantity = 2;

    float gpa = 3.8;
    float price = 10.99;

    double pi = 3.1415926535;
    double e = 2.718281828459045;

    char grade = 'A';
    char symbol = '!';

    char name[] = "Sagar Bhusal";
    char food[] = "Pizza";
    char email[] = "fake123@gmail.com";

    bool isOnline = true; 
    if(isOnline){
        printf("You are online\n\n");
    }  
    else{
        printf("You are offline\n\n");
    } 
    
    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n\n", quantity);

    printf("Your gpa is %f\n",gpa);
    printf("The price is $%.2f\n\n", price);

    printf("The value of pi is %.8lf\n", pi);
    printf("The value of e is %.14lf\n\n", e);

    printf("Your garde is %c\n", grade);
    printf("Your favourite symbol is %c\n\n", symbol);

    printf("Hello %s\n", name);
    printf("Your favourite food is %s\n", food);
    printf("Your email address is %s\n\n", email);

    return 0;
}