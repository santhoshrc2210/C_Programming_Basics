//Print all even or odd numbers in a given range using recursion
//execution of the program starts at main
//use of void type in function
//did not work the other way num=num1 and increasing
#include <stdio.h>

void print_odd(int num1, int num2){
    int num;
    num=num2;
    //base case
    if (num==num1){
        if (num%2!=0){
            printf("%d\n",num);
        }
    }
    //recursive case
    else{
        if (num%2!=0){
            printf("%d ",num);
        }
        num-=1;
        print_odd(num1,num);
}
}

int main() {
    int num_first,num_last;
    printf("Enter the two numbers:");
    scanf("%d %d",&num_first,&num_last);
    print_odd(num_first, num_last);
    return 0;
}
