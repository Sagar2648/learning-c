#include <stdio.h>
#include <unistd.h>

int main() {

    /* for loop = Repeat some code a limited # of times
                  for(Initialization; Condition; Update)*/
    
    int i ;

    /* for (i = 0; i < 10; i++){
        printf("%d\n", i);
    } */

    for (i = 10; i >= 0; i--){
        sleep(1);
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR!!!");

    return 0;
}