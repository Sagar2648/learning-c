#include <stdio.h>

int main(){

    //READ A FILE

    FILE *pFile = fopen("input.txt", "r");
    char buffer[1024] = {0}; //to temporarirly store the data

    if(pFile == NULL){
        printf("Could not open file");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }
    

    fclose(pFile);

    return 0;
}