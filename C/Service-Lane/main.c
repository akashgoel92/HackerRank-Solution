#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int t; 
    scanf("%d %d",&n,&t);
    int width[n], temp;
    for(int width_i = 0; width_i < n; width_i++){
       scanf("%d",&width[width_i]);
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        scanf("%d %d",&i,&j);
        temp = width[i];
        for(int a1 = i; a1 <= j; a1++){
            //printf("%d %d\n",i,j);
            if(temp > width[a1]){
                temp  = width[a1];
                //printf("1 %d\n",temp);
            }
        }
       // printf("%d\n", temp);
        if(temp==1){
            printf("1\n");
        }
        else if(temp==2){
            printf("2\n");
        }
        else if(temp==3){
            printf("3\n");
        }
    }
    return 0;
}
