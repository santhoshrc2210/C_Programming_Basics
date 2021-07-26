#include <stdio.h>



int main() {
    char str[100], new_str[100];
    int i=0,j=0;
    printf("Enter string:");
    //scanf stops reading at whitespace
    //string needs one more space for \0, the last character stored in a string
    scanf("%s",str);
    //differnece between and or boolean functions
    while (str[i]!='\0'){
        if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u'&& str[i]!='A'&& str[i]!='E' && str[i]!='I'&& str[i]!='O' && str[i]!='U'){
            new_str[j]=str[i];
            j++;
        
        }
        i++;
    }
    printf("New string:%s \n",new_str);

    return 0;
}
