#include <stdio.h>

int main(){

    //WRITE A FILE

    FILE *pFile = fopen("output.txt", "w");

    char text[] = "HELLO HELLO HELLO\n ROCKIN' EVERYWHERE!";

    if(pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("File was written successfully!\n");

    fclose(pFile);

    return 0;
}