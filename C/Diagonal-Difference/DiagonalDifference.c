#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i = 0, j= 0, size = 0, sum_diag1 = 0, sum_diag2 = 0, difference = 0;
    scanf("%d",&size);
    
    int matrix[(size*size)], n1 = 0, n2 = size - 1;
    
    for(i = 0; i < (size * size); i++){
        scanf("%d",&matrix[i]);
    }
    
    for(i = 0; i < size; i++){
        sum_diag1 = sum_diag1 + matrix[n1];
        n1 = n1+ size + 1;
    }
    
    for(i = 0; i < size; i++){
        sum_diag2 = sum_diag2 + matrix[n2];
        n2 = n2 + size - 1;
    }
    
    difference = sum_diag1 - sum_diag2;
    
    if(difference < 0){
        difference = ~difference + 1;
    }
    
    printf("%d\n",difference);
    
    return 0;
}
