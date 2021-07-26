
#include <stdio.h>

int main() {
    char str[100];
    int len=0,i=0,idx=0;
    printf("Enter string:");
    //scanf stops reading at whitespace
    //string needs one more space for \0, the last character stored in a string
    scanf("%s",str);
    //find length of string
    while (str[i]!='\0'){
        i++;
        len++;
    }
    for (i=0;i<(len/2);i++){
        if (str[i]==str[len-1-i]){
            idx++;//count the number of iterations, for a palindrome this should
                  //equal to the 1/2 of length
            
        }
    }
    if (idx==len/2){
        printf("The string is a palindrome\n");
    }
    else
        printf("The string is not a palindrome\n");


    return 0;
}
