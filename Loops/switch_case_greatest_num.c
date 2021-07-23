
#include <stdio.h>

int main() {
    int num_1,num_2,n;
    printf("Enter two numbers:");
    scanf("%d%d",&num_1,&num_2);
    
    if (num_1==num_2){
        n=3;
    }
    else
        n=num_1>num_2;//n=1 only if true and n=0 for all other cases
    
    switch (n){
        case 0: printf("%d is greater than %d",num_2,num_1);
            break;
        case 1: printf("%d is greater than %d",num_1,num_2);
            break;
        default: printf("The two numbers are equal");
            break;
    }
    printf("\n");
    return 0;
}
