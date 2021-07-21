#include <stdio.h>

int main() {
    int yr=0,cond1=0,cond2=0;
    printf("Enter year:");
    scanf("%d",&yr);
    //A leap year is exactly divisible by 4 except for century years (years ending with 00).
    //The century year is a leap year only if it is perfectly divisible by 400.
    
    //for non century years
    if (yr%4==0 && yr%100!=0){
        cond1=1;
    }
    //for century years
    if (yr%400==0){
        cond2=1;
    }
    if (cond1 || cond2){
        printf("%d is a Leap year\n",yr);
    }
    else
        printf("%d is not a Leap year\n",yr);

}
