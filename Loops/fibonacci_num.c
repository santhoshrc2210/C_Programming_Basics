
#include <stdio.h>

int main() {
    
    int num,num_1,num_2,fib_num,idx=3;
    printf("Enter number:");
    scanf("%d",&num);
    num_1=1;
    num_2=0;
    printf("sequence no 1:%d\n",num_1);
    printf("sequence no 2:%d\n",num_2);
    while(idx<=num){
        fib_num=num_1+num_2;
        printf("sequence no %d:%d\n",idx,fib_num);
        num_2=num_1;
        num_1=fib_num;
        idx++;
        
    }
    return 0;
}
