#include <stdio.h>

int main() {
    // insert code here...
    int num;
    int mult=1;
    printf("Enter number:");
    scanf("%d",&num);
    while(mult<=10){
        printf("%d*%d=%d\n",num,mult,mult*num);
        mult++;
    }
    
    return 0;
}
