#include <stdio.h>

int main() {
    // a number is divisible by 11 if the difference of sum of digits at even and
    // odd places is zero or divisible by 11
    int num,sum_even=0,sum_odd=0,rem,idx=1;
    printf("Enter number:");
    scanf("%d",&num);
    while (num>0){
        rem=num%10;
        num=num/10;
        if (idx%2==0){
            sum_even+=rem;
        }
        else
            sum_odd+=rem;
        idx++;
        
    }
    if ((sum_even-sum_odd)==0 || (sum_even-sum_odd)%11==0){
        printf("Divisible by 11\n");
    }
    else
        printf("Not Divisible by 11\n");
    return 0;
}
