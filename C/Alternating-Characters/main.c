#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T = 0;
    scanf("%d", &T);
    
    for(int i=0; i<T; i++){
        int count = 0;
        char *string = (char *)malloc(sizeof(char)*10000000);
        scanf("%s",string);
        int length = strlen(string);
        for(int j=0; j<length; j++){
            if(string[j]==string[j+1])
                count++;
        }
        printf("%d\n",count);
        free(string);
    }
    return 0;
}
