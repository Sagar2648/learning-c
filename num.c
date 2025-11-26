
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    int a[1000],i, max, smax, num;;
  
    
    printf("Enter the size of array: ");
    scanf("%d", &num);
    
    printf("Enter the elements in an array:");
    
    for(i=0; i < num; i++) {
        scanf("%d", &a[i]);
    }
    
    if(a[0] > a[1]){
        max = a[0];
        smax = a[1];
    }
    else{
        max = a[1];
        smax = a[0];
    }
    
    for (i=2; i < num; i++){
        if(a[i] > max){
            smax = max;
            max = a[i];
        }
        else if(a[i] > smax && a[i] != max){
            smax= a[i];
        }
    }
    
    printf("Maximum number in the array is: %d\n", max);
    printf("Second maximum number in the array is: %d", smax);

    return 0;
}