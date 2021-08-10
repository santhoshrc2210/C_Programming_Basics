
#include <stdio.h>

int main() {
    // copy one str to another using ptr for strings
    char str1[]="Hel",str2[]="Bye";
    //*str1 always points to the zeroth element
    char *s1,*s2;
    s1=&str1;//points to zero th element in str1
    s2=&str2;//points to zero th element in str2
    while (*s2!='\0'){
        *s1=*s2;
        s1++;
        s2++;
    }
    //if str1 is longer than str2 then we need to add end character
    *s1='\0';
    printf("%s\n",str1);
}
