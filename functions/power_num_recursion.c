#include <stdio.h>
//recursion is calling a function within a function
//recursion has a base case and a recurring case
double power(int num,int exponent){
    double result=1;
    if (exponent==1){
        result=num;
    }
    else
        result=(result*num)*power(num,exponent-1);
    return result;
    
}


int main() {
    int num,exponent;
    double ans;
    printf("Enter number and exponent:");
    scanf("%d %d",&num,&exponent);
    ans=power(num,exponent);
    printf("%2fl\n",ans);
    return 0;
}
