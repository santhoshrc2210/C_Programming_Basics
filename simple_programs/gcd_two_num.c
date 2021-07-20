#include <stdio.h>

int main() {
    int num1,num2,i,gcd_num=1;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&num1,&num2);
    for (i=num2;i>=1;i--){
        if(num2%i==0 && num1%i==0){
            gcd_num=i;
            break;
        }
        
    }
    printf("%d\n",gcd_num);
}
