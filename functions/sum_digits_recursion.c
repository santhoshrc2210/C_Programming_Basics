#include <stdio.h>
//sum of digits using recursion

int sum_digits(int n){
    int sum=0;
    //base case
    if (n/10==0){
        sum=n;
    }
    else
        sum+=n%10+sum_digits(n/10);//need to update and call function in same statement
                                   //otherwise return will be executed after one iteration
    return sum;
}

int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("Sum of digits: %d\n",sum_digits(num));
    
}
