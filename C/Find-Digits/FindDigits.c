#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int divisionCount(int number);

int main() {

    int test_case = 0, i = 0, number = 0, count = 0;
    scanf("%d", &test_case);
    //int *arr = (int *)malloc(sizeof(int) * 1000000);
    for(i = 0; i < test_case; i++){
        scanf("%d",&number);
        count = divisionCount(number);
        printf("%d\n",count);
    }
   // free(arr);
    return 0;
}

int divisionCount(int number){
	int temp = number, count = 0, n = 0, i = 0;
    int *arr = (int *) malloc(sizeof(int) * 10000000);
    while(temp != 0){
        arr[n] = temp%10;
        temp = temp/10;
        n++;
    }
    for(i = 0; i < n; i++){
    	e:
        if(arr[i] == 0){
		    i++;   
		    goto e;
        }
        if(number % arr[i] == 0){
		    count++;
        }
    }
    free(arr);
    return count;
}
