#include <stdio.h>

int main() {
    // insert code here...
    int num,arm_num=0,chk_num,rem;
    printf("Enter number:");
    scanf("%d",&num);
    chk_num=num;
    while (num>=1){
        rem=num%10;
        arm_num+=rem*rem*rem;
        num=num/10;
    }
    if (chk_num==arm_num)
        printf("The numbers is an armstrong number\n");
    else if (chk_num!=arm_num)
        printf("The number is not an armstrong number\n");
}
