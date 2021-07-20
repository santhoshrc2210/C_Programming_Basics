#include <stdio.h>

int main() {
    int num1,num2,l_num,s_num,i,lcm_num;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&num1,&num2);
    
    //max possible value of lcm is l_num*s_num if two numbers are prime
    //if the two numbers are not prime then l_num*s_(1......s_num)
    for (i=1;i<=num1;i++){
        lcm_num=num2*i;
        if (lcm_num%num1==0){
            printf("LCM:%d\n",lcm_num);
            break;
        }
    }
    return 0;
}
