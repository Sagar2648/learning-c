#include <stdio.h>
#include <string.h>

int main (){

    //SHOP CART PROGRAM

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to purchase?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';  // to avoid input buffer 

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s/s\n", quantity, item);
    printf("The total is: %c%.2f", currency, total);

    return 0;
}