#include <stdio.h>

typedef int Number;
typedef char String[50];

int main(){

    // typedef = reserved keyword that gives an existing datatype a "nickname" 
    //             Helps simplify complex types and improves code readability

    //            typedef existing_type new_name;

    String name[] = "Sagar Bhusal";

    printf("%s", name);

    return 0;
}