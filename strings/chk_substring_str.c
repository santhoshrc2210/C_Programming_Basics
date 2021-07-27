#include <stdio.h>

int main() {
    char str[100],sub_str[100];
    int i=0,j=0;
    printf("Enter string and sub-string:");
    scanf("%s %s",str,sub_str);
    for (i=0;str[i]!='\0';i++){
        j=0;//needs to reset, start from the first pos of substring
        while (sub_str[j]==str[i]){
            j++;
            i++;
            if (sub_str[j]=='\0'){
                printf("The substring is present\n");
            }
    }
    }

    return 0;
}
//Code taken from Balguruswamy

