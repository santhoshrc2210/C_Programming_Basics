#include <stdio.h>

int dec_oct(int num){
    //convert a decimal number to octal
    int qtnt=0,rem=0;
    qtnt=num;
    printf("The octal number is(MSB-Bottom,LSB-Top):\n");
    while (qtnt>0){
        rem=qtnt%8;
        printf("%d\n",rem);
        qtnt=qtnt/8;
        
    }

    printf("\n");
    return 0;
}

int main() {
    // insert code here...
    int dec_num;
    printf("Enter the decimal number:\n");
    scanf("%d",&dec_num);
    dec_oct(dec_num);
}
