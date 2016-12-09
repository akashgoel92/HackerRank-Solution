#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int treeHeight(int n);

int main() {

    int choice = 0, cycle = 0, result = 0, i = 0;
    
    scanf("%d", &choice);
    
    for(i = 0; i < choice; i++){
        scanf("%d", &cycle);
        result = treeHeight(cycle);
        printf("%d\n",result);
    }
    
    return 0;
}

int treeHeight(int n){
    int i = 0, height = 1;
    
    if(n == 0){
        return height;
    }
    else{
        for(i = 1; i <= n; i++){
            if(i % 2 != 0){
                height = height * 2;
            }
            else{
                height++;
            }
        }
    }
    return height;
}
