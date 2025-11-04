#include <stdio.h>
#include <stdbool.h>

int getMax(int x, int y){

    if(x >= y){
        return x;
    }
    else{
        return y;
    }
}

int main() {

    //return = returns a value back to where you call a function

    int max = getMax(2,3);

    printf("%d", max);

    return 0;
}