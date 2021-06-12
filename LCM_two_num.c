#include <stdio.h>

int main() {
    // insert code here...
    int num1,num2,lcm,idx;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    for(idx=num1*num2;idx>=num1||idx>=num2;idx--)
        if (idx%num1==0 && idx%num2==0)
            lcm=idx;
    printf("LCM:%d\n",lcm);
    return 0;
}
