#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *hh, *mm, *temp_ss, ss[3], ap[3], time[11];
    int i = 0, j = 0;
    int t_hh = 0, t_mm = 0, t_ss = 0;
    
    //No need to malloc
    
    scanf("%s",time);
    time[strlen(time)] = '\0';
    
    //splitting strings
    hh = strtok(time,":");
    mm = strtok(NULL,":");
    temp_ss = strtok(NULL,":");
    
    hh[2] = '\0';
    mm[2] = '\0';
    temp_ss[4] = '\0';
    
    //copying seconds and AM/PM respectively
    for(i = 0; i < 2; i++){
        ss[i] = temp_ss[i];
    }
    ss[2] = '\0';
    
    for(i = 2; i < 4; i++){
        ap[j] = temp_ss[i];
        j++;
    }
    ap[2] = '\0';
    
    //converting char to int
    t_hh = atoi(hh);
    t_mm = atoi(mm);
    t_ss = atoi(ss);
    
    //Checking for AM/PM and printing the time accordingly
    if(strcmp(ap, "AM") == 0){
        if(t_hh == 12){
            t_hh = 00;
            printf("%02d:%02d:%02d\n",t_hh,t_mm,t_ss);
        }
        else{
            printf("%02d:%02d:%02d\n",t_hh,t_mm,t_ss);
        }
    }
    if(strcmp(ap,"PM") == 0){
        if(t_hh == 12){
            printf("%02d:%02d:%02d\n",t_hh,t_mm,t_ss);
        }
        else{
            t_hh += 12;
            printf("%02d:%02d:%02d\n",t_hh,t_mm,t_ss);
        }
    }
    
    return 0;
}
