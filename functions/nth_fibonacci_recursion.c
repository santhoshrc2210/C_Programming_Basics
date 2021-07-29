#include <stdio.h>
//nth fibonacci term using recursion
//nth term is equal to sum of previous two numbers

int nth_fibonacci_num(int num){
    int nth_term;
    //base case
    if (num==0 || num==1){
        nth_term=num;
    }
    else
        nth_term= nth_fibonacci_num(num-1)+nth_fibonacci_num(num-2);
    return nth_term;
        
}

int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("%d\n",nth_fibonacci_num( num));
    
}
