#include <stdio.h>

int main() {
    // check if two strings are an anagram are not
    char str_ref[100],str[100];
    int len_ref=0,len_str=0,asci_count_ref=0,asci_count_str=0,i=0,temp=0;
    printf("Enter strings:");
    scanf("%s %s",str_ref,str);
    //a string is an anagram of another if all characters that occur in one also occur in the other str
    //first check if the two have same lengths
    //find the ascii value of each character and add

    while (str[i]!='\0'){
        len_str++;
        temp=str[i];
        asci_count_str+=temp;
        i++;//increment operator after using it for calculation

    }
    temp=0;
    i=0;
    while (str_ref[i]!='\0'){
        len_ref++;
        temp=str_ref[i];
        asci_count_ref+=temp;
        i++;

    }
    
    //printf("%d %d",asci_count_str,asci_count_ref);
    if (asci_count_ref==asci_count_str && len_str==len_ref){
        printf("The two strings form an Anagram\n");

    }
    else {
        printf("Not an Anagram\n");
    }

}
