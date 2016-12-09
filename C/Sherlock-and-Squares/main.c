#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T, i=0;
    scanf("%d",&T);
    int max, min;
    
    while(i<T){
        scanf("%d",&min);
        scanf("%d",&max);
        
        min=ceil(sqrt(min));  
        max=floor(sqrt(max));  
        
        printf("%d\n",(((int)(max-min))+1));
        
        i++;
    }
        
    return 0;
}
