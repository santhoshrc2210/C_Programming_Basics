#include <stdio.h>

int main() {
    //A triangle is valid if sum of its two sides is greater than the third side. If three sides are a,b and c, then three conditions should be met.
    int side_a,side_b,side_c,sum1,sum2,sum3;
    printf("Enter the length of the sides: ");
    scanf("%d%d%d",&side_a,&side_b,&side_c);
    sum1=side_b+side_c;
    sum2=side_a+side_b;
    sum3=side_a+side_b;
    if (sum1>side_a && sum2>side_b && sum3>side_c){
        printf("The lengths are valid\n");
    }
    else
        printf("The lengths are not valid\n");

    return 0;
}
