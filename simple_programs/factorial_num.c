#include <stdio.h>

int main() {
    int num,i,fact_num=1;
    printf("Enter number:\n");
    scanf("%d",&num);
    for (i=1;i<=num;i++){
        fact_num=i*fact_num;
    }
    printf("%d\n",fact_num);
    return 0;
}
