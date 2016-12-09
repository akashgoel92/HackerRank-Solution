#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, i, length, pos, end, count;
    char a,b;
    
    scanf("%d",&n);
    
    char str[n][10000];
        
    for(i=0;i<n;i++)
        scanf("%s",str[i]);
    
    for(i=0;i<n;i++){
        pos=0;
        end=strlen(str[i])-1;
        count=0;
        
        while(pos<end){
            a=str[i][pos];
            b=str[i][end];
            
            if(a!=b){
                if(b>a)
                count = count+(b-a);
            else
                count = count+(a-b);
            }
            pos++;
            end--;
        }
        printf("%d\n",count);
        
    }
    return 0;
}
