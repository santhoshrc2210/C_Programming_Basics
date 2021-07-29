#include <stdio.h>

int sum_upto_n(int n){
    int sum=0;
    //base case
    if (n==1){
        sum+=1;
    }
    //recursive case
    else
        sum+=n+sum_upto_n(n-1);
    
    return sum;
}


int main() {
    int num,sum;
    printf("Enter the number:");
    scanf("%d",&num);
    sum=sum_upto_n(num);
    printf("Sum:%d\n",sum);
    
}
