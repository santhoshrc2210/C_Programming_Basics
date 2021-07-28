
#include <stdio.h>

//return-type function-name(input arguements)
double power(int num, int exponent){
    double result=1.0;
    int i=0;
    for (i=0;i<exponent;i++){
        result*=num;
    }
    return result;
    
}

int main() {
    int num,exponent;
    double ans;
    printf("Enter number and exponent:");
    scanf("%d %d",&num,&exponent);
    ans=power(num,exponent);
    printf("%2fl\n",ans);
    return 0;
}
