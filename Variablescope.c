#include <stdio.h>

//int result = 0; //GLOBAL SCOPE (hard to debug)

int add (int x, int y){
       int result = x + y;
       return result;
}

int subract (int x, int y){
       int result = x - y;  // Local
       return result;
}

int main() {
    
    /* Variable scope = Refers to where a variable is recognized and accessible.
       Varibles can share same name if they're in different scopes{}*/

    int result = subract(4, 3);

    printf("%d\n", result);

    return 0;
}