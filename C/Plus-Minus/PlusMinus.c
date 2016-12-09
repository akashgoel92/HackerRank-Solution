#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void plusMinus(int size);

int main() {

    int size;
    scanf("%d",&size);
    
    plusMinus(size);
    
    return 0;
}

void plusMinus(int size){
    int i = 0, number = 0;
    float total_pos = 0, total_neg = 0, total_zero = 0;
    
    for(i = 0; i < size; i++){
        scanf("%d",&number);
        
        if(number > 0)
            total_pos++;
        
        else if(number < 0)
            total_neg++;
        
        else
            total_zero++;
    }
    
    printf("%.3f\n%.3f\n%.3f\n",(total_pos/size), (total_neg/size), (total_zero/size));
    
}
