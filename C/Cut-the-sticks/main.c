#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int findmin(int arr[], int n){
    int min=1000;
    for(int i=0;i<n;i++){
        if(arr[i]<min && arr[i]>0){
           min=arr[i];
        }
    }
    return min;
}

int main(){
    int n,i=0; 
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[0]);
    
    for(int arr_i = 1; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    int min=findmin(arr,n);
    
    while(i<n){
        int j=0,k=0, sticks_cut=0;
        int min=findmin(arr,n);
        while(j<n){
           if(arr[j]>0) {
               arr[j] = arr[j]-min;
               sticks_cut++;
           }
           j++;
        }
        if(sticks_cut>0) printf("%d\n",sticks_cut);
        if(sticks_cut==0) break;
        
        i++;
    }
    
    return 0;
}
