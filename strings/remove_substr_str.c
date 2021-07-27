
#include <stdio.h>
//try without using new str
int main() {
    char str[100],sub_str[100],new_str[100];
    int i=0,j=0,idx=0,k=0,sub_str_present=0,i_pos=0,j_pos=0;
    printf("Enter string and sub-string:");
    scanf("%s %s",str,sub_str);
    //check substring is present
    for (i=0;str[i]!='\0';i++){
        j=0;//needs to reset, start from the first pos of substring
        while (sub_str[j]==str[i]){
            j++;
            i++;
            if (sub_str[j]=='\0'){
                sub_str_present=1;
                i_pos=i;
                j_pos=j;
            }
    }
    }
    //printf("%d %d\n",i_pos,j_pos);
    if (sub_str_present==1){
        for (idx=0;str[idx]!='\0';idx++){
            if ((idx<(i_pos-j_pos)) || (idx>=i_pos)){
                new_str[k]=str[idx];
                //printf("%d",k);
                k++;
        }
    }
    }
    printf("\n%s\n",new_str);
}

