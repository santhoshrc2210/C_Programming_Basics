
#include <stdio.h>

int main() {
    int num1=0,num2=0,num3=0;
    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    //all three numbers are different
    if (num1>num2 && num1>num3){
        printf("%d is the greatest number",num1);
    }
    else if (num2>num1 && num2>num3){
        printf("%d is the greatest number",num2);
    }
    else if (num3>num2 && num3>num1){
        printf("%d is the greatest number",num3);
    }
    //two numbers are equal
    if (num1==num2 && num1>num3){
        printf("%d is the greatest number",num1);
    }
    else if (num1==num2 && num1<num3){
        printf("%d is the greatest number",num3);
    }
    else if (num1==num3 && num1>num2){
        printf("%d is the greatest number",num3);
    }
    else if (num1==num3 && num1<num2){
        printf("%d is the greatest number",num2);
    }
    else if (num2==num3 && num1>num2){
        printf("%d is the greatest number",num1);
    }
    else if (num2==num3 && num1<num2){
        printf("%d is the greatest number",num2);
    }

    //three numbers are equal
    if (num1==num2 && num1==num3){
        printf("All three numbers are equal\n");
    }
    printf("\n");

    return 0;
}
