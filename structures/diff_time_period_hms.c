#include <stdio.h>

struct time_period
{
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct time_period time_period[3];
    int i=0;
    while (i<2){//first two elements 0,1
        printf("Enter the number of hours:\n");
        scanf("%d",&time_period[i].hours);
        printf("Enter the number of minutes:\n");
        scanf("%d",&time_period[i].minutes);
        printf("Enter the number of seconds:\n");
        scanf("%d",&time_period[i].seconds);
        i++;
    }
    //converting to seconds and adding
    int time_1_seconds,time_2_seconds,time_tot_seconds;
    time_1_seconds=time_period[0].seconds+(time_period[0].minutes*60)+(time_period[0].hours*60*60);
    time_2_seconds=time_period[1].seconds+(time_period[1].minutes*60)+(time_period[1].hours*60*60);
    time_tot_seconds=time_1_seconds-time_2_seconds;
    time_period[2].hours=time_tot_seconds/3600;
    printf("The number of hours:%d\n",time_period[2].hours);
    time_period[2].minutes=(time_tot_seconds-(time_period[2].hours*60*60))/60;
    printf("The number of minutes:%d\n",time_period[2].minutes);
    time_period[2].seconds=time_tot_seconds-((time_period[2].hours*60*60)+(time_period[2].minutes*60));
    printf("The number of seconds:%d\n",time_period[2].seconds);

    
}
