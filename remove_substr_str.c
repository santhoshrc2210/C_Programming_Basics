#include <stdio.h>

int main() {
    // insert code here...
    char str[20],sub_str[20],new_str[20];
    int i=0,j=0,idx=0;
    printf("Enter string and substring:\n");
    scanf("%s %s",str,sub_str);
    
    //first check if string is present and the index in the str
    for (i=0;str[i]!='\0';i++){
        while (sub_str[j]==str[i]){
            i++;
            j++;
            if (sub_str[j]=='\0'){
                idx=i-j;
                //printf("The sub string is present \n");
            }
        }
    }
    //remove by skipping past the substring and copy to new string
    i=0;
    int k=0;
    for (i=0;str[i]!='\0';i++){
        if (i<=idx-1 || i>=idx+j){
            new_str[k]=str[i];
            k++;
        }
    }
    printf("%s\n",new_str);
            
}
