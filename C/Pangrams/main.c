#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char string[1000000];
    fgets(string, sizeof(string), stdin);
    int length = strlen(string);
    
    int hash[26], u=0;
    memset(hash,0,sizeof(hash));
    
    for(int i=0; i<length; i++){
        if(string[i]>='a' && string[i]<='z' || string[i]>='A' && string[i]<='Z'){
            if(islower(string[i])){
                if(hash[string[i]-'a'] == 0) u++;
                hash[string[i]-'a'] = 1;
            }
            else{
                if(hash[string[i]-'A'] == 0) u++;
                hash[string[i]-'A'] = 1;
            }
        }
    }
    
    if(u==26) printf("pangram");
    else printf("not pangram");
    
    return 0;
}
