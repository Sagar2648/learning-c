#include <stdio.h>

/* enum {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}Day; */

typedef enum{
    SUCCESS, FAILURE, PENDING
}Status;

void connectStatus(Status status);

int main(){

    /* enum = A user-defined data type that consists 
              of set of named integer constants.
              Benefit: Replaces numbers with readable names*/

    // SUNDAY = 0;
    // MONDAY = 1;
    //TUESDAY = 3;

    /* enum Day today = FRIDAY;

    if(today == SUNDAY || today == SATURDAY){
        printf("It's the weekend");
    }
    else {
        printf("It's a weekday");
    } */

   Status status = SUCCESS;

   connectStatus(status);

    return 0;
}

void connectStatus(Status status){
    switch (status)
    {
    case SUCCESS:
        printf("Connection was successfull\n");
        break;

    case FAILURE:
        printf("Could not connect\n");
        break;

    case PENDING:
        printf("Connecting.....\n");
        break;
    
    default:
        break;
    }
}