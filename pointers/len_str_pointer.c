#include <stdio.h>

int main() {
    // length of a string using pointers
    char *str_ex="HelloWorld";//initialising strings
    //points to the first character in the string
    int len=0;
    while (*str_ex!='\0'){//value at the address pointed by the string
        str_ex++;
        len++;
    }
    printf("Length of string:%d\n",len);
}
