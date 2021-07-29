//reverse of a number using recursion
//max number of digits is 10
#include <stdio.h>

void reverse_num(int num) {
    
    
    //base case
    //single digit
    if (num/10==0){
        printf("%d",num);
    }
    //recursive case
    else {
        printf("%d",num%10);
        num=num/10;
        reverse_num(num);
    }
    printf("\n");//printf will be executed every time the function is called why is this?
    
}


int main() {
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    reverse_num(num);
}
