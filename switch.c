#include <stdio.h>

int main() {

    /* Switch = An alternative to using many if-else statements
    more efficient with fixed integer values*/

    int dayOfWeek = 0;

    printf("Enter a day of the week ( 1 - 7): ");
    scanf("%d", &dayOfWeek);

    switch (dayOfWeek)
    {
    case 1:
        printf("It is Sunday");
        break;

    case 2:
        printf("It is Monday");
        break;

    case 3:
        printf("It is Tuesday");
        break;

    case 4:
        printf("It is Wednesday");
        break;

    case 5:
        printf("It is Thrusday");
        break;

    case 6:
        printf("It is Friday");
        break;

    case 7:
        printf("It is Saturday");
        break;
    
    default:
       printf("It is not the day of a week");
        break;
    }

    return 0;
}