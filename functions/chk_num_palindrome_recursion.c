//execution of the program starts at main
//use of void type in function


//reverse of a number using recursion and check if it is a palindrome or not
//max number of digits is 10
#include <stdio.h>

int reverse_num(int num) {
    int rev_num=0;//not initialized everytime
    
    //base case
    //single digit
    if (num/10==0){
        rev_num=rev_num*10+num;
    }
    //recursive case
    else {
        rev_num=rev_num*10+num%10;//in power function the function is bieng called in this satement
        num=num/10;
        reverse_num(num);
    }
    return rev_num;
    
}


int main() {
    int num,rev_num;
    printf("Enter number:");
    scanf("%d",&num);
    rev_num=reverse_num(num);
    //now check if it is a palindrome
}
