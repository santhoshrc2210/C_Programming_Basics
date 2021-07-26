//does not work if all characters are same and when there are multiple repititions
//letter is repeated 3 times or more
#include <stdio.h>

int main() {
    char str[100],new_str[100];
    int i=0,j=0,k=0;
    printf("Enter string:");
    scanf("%s",str);
    //copy one str to another
    for (i=0;str[i]!='\0';i++){
        new_str[i]=str[i];
    }
    //create a string with no duplicates
    for (i=0;str[i]!='\0';i++){
        for (j=i+1;str[j]!='\0';j++){
            if (str[i]==str[j]){//duplicate found
                for (k=j+1;str[k-1]!='\0';k++){//need to move the escape element too
                    str[k-1]=str[k];//copy each element back
                }
            }
        }
    }
    printf("%s\n",str);
    
    //count the frequency of each character by comparing with new array
    for (i=0;str[i]!='\0';i++){
        k=0;
        for (j=i;new_str[j]!='\0';j++){
            if (str[i]==new_str[j]){
                k++;
            }
        }
        printf("%c occurs %d times\n",str[i],k);
    
    }
    return 0;
}
