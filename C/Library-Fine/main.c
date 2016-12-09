#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a_dd = 0, a_mm = 0, a_yy = 0, e_dd = 0, e_mm = 0, e_yy = 0;
    int fine = 0;
    //actual return date
    scanf("%d",&a_dd);
    scanf("%d",&a_mm);
    scanf("%d",&a_yy);
    
    //expected return date
    scanf("%d",&e_dd);
    scanf("%d",&e_mm);
    scanf("%d",&e_yy);
    
    //case1
    if(a_dd == e_dd && a_mm == e_mm && a_yy == e_yy){
        printf("%d\n",fine);
    }
    
    //case2
    else if(a_mm == e_mm && a_yy == e_yy){
        if(a_dd < e_dd){
            printf("%d\n",fine);
        }
        else{
            fine = 15 * (a_dd - e_dd);
            printf("%d\n",fine);
        }
    }
    
    //case3
    else if(a_mm != e_mm && a_yy == e_yy){
        if(a_mm < e_mm){
            printf("%d\n",fine);
        }
        else{
            fine = 500 * (a_mm - e_mm);
            printf("%d\n",fine);
        }
    }
    
    //case4
    else if(a_yy != e_yy){
        if(a_yy < e_yy){
            printf("%d\n",fine);
        }
        else{
            fine = 10000;
            printf("%d\n", fine);
        }
    }
    
    return 0;
}
