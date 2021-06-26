#include <stdio.h>

int main() {
    // insert code here...
    char str_1[10],str_2[10];
    char *str_1_p,*str_2_p;
    int count=0,length_str1=0,length_str2=0;
    printf("Enter string 1: ");
    scanf("%s",str_1);
    printf("Enter string 2: ");
    scanf("%s",str_2);
    str_1_p=&str_1;
    str_2_p=&str_2;
    //count the number of characters
    while (*str_1_p!='\0'){
        str_1_p++;
        length_str1++;
    }
    while (*str_2_p!='\0'){
        str_2_p++;
        length_str2++;
    }
    str_1_p=&str_1;//reset the value of the str pointer
    str_2_p=&str_2;

    while (*str_1_p==*str_2_p){
        str_1_p++;
        str_2_p++;
        count++;
    }
    if (count==length_str1 && count==length_str2){
        printf("The strings are equal\n");
    }
    else
        printf("The strings are not equal\n");

    return 0;
}
