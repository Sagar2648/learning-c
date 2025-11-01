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

    int normalInt = 1000;                       // standard int 
double normalDouble = 3.14;                 // standard double

short int small = -100;                     // smaller int
unsigned int count = 25;                    // only positive int
long int big = 1234567890;                  // larger int
long long int veryBig = 9223372036854775807; // very large int
unsigned long long int huge = 18446744073709551615U; // very large, only positive
long double precise = 3.141592653589793238L; // extended precision

printf("Normal int: %d\n", normalInt);
printf("Normal double: %lf\n", normalDouble);
printf("Small: %hd\n", small);
printf("Count: %u\n", count);
printf("Big: %ld\n", big);
printf("Very Big: %lld\n", veryBig);
printf("Huge: %llu\n", huge);
printf("Precise: %Lf\n", precise);



    return 0;
}