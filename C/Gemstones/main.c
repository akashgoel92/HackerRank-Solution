#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int i, n, hash[26], count=0;
    memset(hash,0,sizeof(hash));
   
    scanf("%d",&n);
    
    char str[n][100];
    
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    
    for(i=0;i<n;i++){
        int hash1[26];
        memset(hash1,0,sizeof(hash1));
        int length = strlen(str[i]);
        int j=0;
        for(j=0;j<length;j++){
            char a = str[i][j];
            hash1[str[i][j] - 'a']++;
            
            if(hash1[a-'a']==1)
                hash[str[i][j] - 'a']++;
        }
    }
    
    for(int i=0; i<26;i++){
        if(hash[i]==n)
            count++;
    }
    
    printf("%d\n",count);
    
    return 0;
}
