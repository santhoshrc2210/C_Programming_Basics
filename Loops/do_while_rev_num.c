
#include <stdio.h>

int main() {
    int num,rev_num=0,rem;
    printf("Enter number:");
    scanf("%d",&num);
    do {
        rem=num%10;
        rev_num=(rev_num*10) + rem;
        num=num/10;
    } while(num>0);
    printf("%d\n",rev_num);
    return 0;
}
