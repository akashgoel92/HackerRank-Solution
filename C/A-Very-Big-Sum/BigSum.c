#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i = 0, size = 0;
    unsigned long int sum = 0;
    scanf("%d",&size);
    int arr[size];
    for(i = 0; i < size; i++){
        scanf("%d",&arr[i]);
         sum = sum + arr[i];
    }
    printf("%lu\n",sum);
    
    return 0;
}
