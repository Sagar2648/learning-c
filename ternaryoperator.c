#include <stdio.h>
#include <stdbool.h>

int main() {

    // ternary operator ? = shorthand for if-else statement
    // (condition) ? value_if_true : value_if_false;

    int hours = 13;
    int minutes = 3;
    char *meridiem = (hours <12) ? "AM" : "PM";

    printf("%02d:%02d %s", hours, minutes, meridiem);

    return 0;
}