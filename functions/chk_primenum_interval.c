#include <stdio.h>
//function to check if a number is prime returns 0 if number is prime otherwise returns 1
//prime number has a factor of 1 and itself (2,3,5,7,11....
int chk_prime(int num){
    int i=1;
    if (num==1){
        return 1;
    }
    else
        for (i=2;i<num;i++){
            if (num%i==0){
                return 1;
        }
    }
    return 0;
}

int main() {
    int num_first,num_last,num,is_prime;
    printf("Enter the first and last number of the interval:");
    scanf("%d %d",&num_first,&num_last);
    for (num=num_first;num<=num_last;num++){
        is_prime=chk_prime(num);
        if (is_prime==0){
            printf("%d ",num);
        }
    }
    printf("\n");
}

