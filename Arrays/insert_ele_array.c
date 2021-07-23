#include <stdio.h>

int main() {
    int arr[10],pos,val,i,len;
    //for array index starts from zero to len-1
    
    printf("Enter the length of array:");
    scanf("%d",&len);
    //initialize array with inputs from user
    printf("Enter elements of array:");
    for (i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the position and value of the new element:");
    scanf("%d%d",&pos,&val);
    
    //insert element at that position and copy the elements to the next
    for (i=len;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    
    //print the resulting array
    for (i=0;i<len+1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
