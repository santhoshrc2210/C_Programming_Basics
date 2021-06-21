//  check_prime_intervals for any number greater than 2

#include <stdio.h>

int check_prime(int num);

int main() {
    int min_num=0,max_num=0,num=0,num_prime;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&min_num,&max_num);
    
    for (num=min_num;num<max_num;num++){
        num_prime=check_prime(num);
        if (num_prime==1){
            printf("%d ",num);
        }
        
    }
}
int check_prime(int num){
    int i_num=2,num_factors=0;
    //  Prime number has factors only 1 and itself
    for (i_num=2;i_num<num;i_num++){
        if (num%i_num==0){
            num_factors++;
        }
    }
    if (num_factors==0){
        return 1;
    }
    else{
        return 0;
    }
    
}
