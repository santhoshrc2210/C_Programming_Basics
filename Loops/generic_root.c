#include <stdio.h>

int main() {
    //generic root of a number is sum of all the digits of the number until we get a single-digit output.
    int num,sum=0,rem;
    printf("Enter number:");
    scanf("%d",&num);
    //first check if it is a single digit number
    while ((num/10)>0){
        //add all the digits in the number
        sum=0;
        while (num>0){
            rem=num%10;
            sum+=rem;
            num=num/10;
    }
        num=sum;
        //check if it is single digit
        if ((num/10)==0){
            printf("The generic root is:%d\n",num);
            break;
        }
    }
    return 0;
}
