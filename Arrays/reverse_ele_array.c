#include <stdio.h>

int main() {
    // without using a new array
    int arr[10],temp,i,len;
    
    //for array index starts from zero to len-1
    printf("Enter the length of array:");
    scanf("%d",&len);
    //initialize array with inputs from user
    printf("Enter elements of array:");
    for (i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    //reverse array by swapping the elements, iterate only for one half of the array
    for (i=0;i<len/2;i++){
        temp=arr[i];
        arr[i]=arr[(len-1)-i];
        arr[(len-1)-i]=temp;
        //printf("%d%d",arr[i],arr[len-1-i]);
    }
    //print the resulting array
    for (i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
