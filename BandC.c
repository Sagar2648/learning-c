#include <stdio.h>

int main(){

    // Break = Break out of a loop (STOP)
    // Continue = Skip current cycle of a loop (SKIP)

    for(int i = 1; i <= 10; i++){

        if(i == 4){
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}