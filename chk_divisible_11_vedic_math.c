// a number is divisible by 11 if the difference of sum of digits at even and
// odd places is zero or bivisible by 11

#include <stdio.h>

int main() {
    // insert code here...
    int num,sum_even=0,sum_odd=0,rem,idx=1;
    printf("Enter number:");
    scanf("%d",&num);
    
    while (num>=1){
        rem=num%10;
        num=num-rem;
        num=num/10;
        if (idx%2==0)
            sum_even=sum_even+rem;
        else
            sum_odd=sum_odd+rem;
        idx++;
        //printf("%d,%d,%d\n",sum_odd,sum_even,idx);
    }
    
    if (sum_odd-sum_even==0 ||(sum_odd-sum_even)%11==0)
        printf("Number is divisible by 11\n");
    else
        printf("Number is not divisible by 11\n");
}
