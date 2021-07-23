#include <stdio.h>

int main() {
    int arr[10],pos,i,len;
    
    //for array index starts from zero to len-1
    printf("Enter the length of array:");
    scanf("%d",&len);
    //initialize array with inputs from user
    printf("Enter elements of array:");
    for (i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the position of the element to be removed:");
    scanf("%d",&pos);
    
    //copying the elements to one position back
    for (i=pos;i<len-1;i++){
        arr[i]=arr[i+1];
    }
    for (i=0;i<len-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
