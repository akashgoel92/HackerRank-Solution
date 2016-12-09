#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void checkClass(int n, int k);

int main() {

    int i = 0, test_case = 0, num_students = 0, min_students=0;
    scanf("%d",&test_case);
    for(i = 0; i < test_case; i++){
        scanf("%d",&num_students);
        scanf("%d",&min_students);
        checkClass(num_students, min_students);
    }
    
    return 0;
}

void checkClass(int n, int k){
    int i = 0, time = 0, count = 0;
    for(i = 0; i < n; i++){
        scanf("%d",&time);
        if(time <= 0){
            count++;
        }
    }
    if(count >= k){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return;
}
