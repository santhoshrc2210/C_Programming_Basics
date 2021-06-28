#include <stdio.h>

int main() {
    // character does not take in spaces string does not take in enter
    char str[100];
    int i=0,num_vow=0,num_dig=0,num_space=0;
    printf("Enter the string:\n");
    //scanf("%s",str); stops at the first white space
    gets(str);//will scan even white space, stops at return
    for (i=0;str[i]!='\0';i++){
        if (str[i]=='a' || str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A' || str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            num_vow++;
        }
        else if (str[i]>='0' && str[i]<='9'){
            num_dig++;
            }
        else if (str[i]==' '){
            num_space++;
        }
    }
    printf("Number of digits:%d\n",num_dig);
    printf("Number of vowels:%d\n",num_vow);
    printf("Number of spaces:%d\n",num_space);
        
    return 0;
}
