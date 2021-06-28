#include <stdio.h>

int main() {
    // insert code here...
    int a,num,sum;
    printf("Enter the number:");
    scanf("%d",&num);
    sum=0;
    for (a=1;a<=num;++a)
        sum=sum+a;
    printf("The sum of the natural numbers is:%d\n",sum);
    return 0;
}
