#include <stdio.h>

int main() {
    char str[10],rev_str[10];
    char *str_p ;
    int length=0,i=0;
    printf("Enter string:");
    scanf("%s",&str);
    str_p=&str;//points to the first letter in the string
    while (*str_p!='\0'){
        str_p++;
        length++;
    }
    str_p--;//point to the last element in the string
    while (length!=0){
        length--;
        rev_str[i]=*str_p;
        i++;
        str_p--;
    }
    printf("%s",rev_str);
    return 0;
}
