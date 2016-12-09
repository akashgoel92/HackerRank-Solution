#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void drawStaircase(int height);

int main() {

    int height = 0;
    scanf("%d", &height);
    
    drawStaircase(height);
    
    return 0;
}

void drawStaircase(int height){
    int i = 0, j= 0, k = 0, length = 1;
    int t_height = height;
    for(i = 0; i < height; i++){
        for(j = t_height-1; j > 0; j--){
            printf(" ");
        }
        for(k = 0; k < length; k++){
            printf("#");
        }
        t_height--;
        length++;
        printf("\n");
    }
}
