//print numbers from 1 to n using recursion
//execution of the program starts at main
//use of void type in function
#include <stdio.h>

void print_num(int num){
    
    if (num==1){
        printf("%d\n",num);
    }
    else
        if (num>=2){//otherwise it will print negative numbers
            printf("%d ",num);
            num--;
            print_num(num);
}
}

int main() {
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    print_num(num);
    return 0;
}
