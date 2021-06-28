#include <stdio.h>

int main() {
    // insert code here...
    int len,i,idx,j=0,arr[50],new_arr[50];
    printf("Enter length of array:");
    scanf("%d",&len);
    printf("Enter array elements:\n");
    for (i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    //loop through from the end and copy to new array
    for (idx=len-1;idx>=0;idx--){
        new_arr[j]=arr[idx];
        j++;
    }
    //print new array
    for (i=0;i<len;i++){
        printf("%d\n",new_arr[i]);
    }
    return 0;
}
