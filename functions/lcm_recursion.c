#include <stdio.h>
//lcm of two numbers using recursion= num1*num2/gcd(a,b)

int hcf(int num1, int num2){
    int smallest;
    //base case
    if (num2==0){
        return num1;
    }
    else if (num1==0){
        return num2;
    }
    else if (num1==num2){
        return num1;
    }
    //recursive case
    else
        //the difference of the two nums and the smallest number
        if (num1>num2){
            smallest=num2;
            num1=num1-num2;
            return hcf(num1,num2);
        }
        else
            smallest=num1;
            num2=num2-num1;
            return hcf(num2,num1);
    
}

int main() {
    int num1,num2;
    printf("Enter the two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("LCM: %d\n",((num1*num2)/hcf(num1,num2)));
    return 0;
}
