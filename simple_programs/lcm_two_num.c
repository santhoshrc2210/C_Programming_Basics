#include <stdio.h>

int main() {
    int num1,num2,l_num,s_num,i,lcm_num;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&num1,&num2);
    //find the larger number
    if (num1>num2){
        l_num=num1;
        s_num=num2;
    }
    else if (num1<=num2){
        l_num=num2;
        s_num=num1;
    }
    //max possible value of lcm is l_num*s_num if two numbers are prime
    //if the two numbers are not prime then l_num*s_(1......s_num)
    for (i=1;i<=s_num;i++){
        lcm_num=l_num*i;
        if (lcm_num%s_num==0){
            printf("LCM:%d\n",lcm_num);
            break;
        }
    }
    return 0;
}
