//interesting problem, code taken from: https://www.programmingwithbasics.com/2016/03/c-program-for-reverse-given-number.html

#include <stdio.h>

int main() {
    int rev_num=0,rem,num;
    // insert code here...
    printf("Enter number to be reversed:");
    scanf("%d",&num);
    while(num>=1){
        rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10; //int divison works like this 123/10=12
    }
    printf("The reversed number is:%d\n",rev_num);
}
