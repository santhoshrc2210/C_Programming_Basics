#include <stdio.h>

int main() {
    // insert code here...
    char str[20],sub_str[20];
    int i=0,j=0;
    printf("Enter string and substring:\n");
    scanf("%s %s",str,sub_str);
    //find the index of the str that matches sub_str
    for (i=0;str[i]!='\0';i++){
        while (sub_str[j]==str[i]){
            i++;
            j++;
            if (sub_str[j]=='\0'){
                printf("The sub string is present\n");
            }
        }
    }
            
    return 0;
}
//Code taken from Balguruswamy
