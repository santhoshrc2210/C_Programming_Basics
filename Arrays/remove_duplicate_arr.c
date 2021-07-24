#include <stdio.h>

// use a function to remove duplicates from array

int main() {
    int arr[10],i=0,len,j=0;
    
    //for array index starts from zero to len-1
    printf("Enter the length of array:");
    scanf("%d",&len);
    //initialize array with inputs from user
    printf("Enter elements of array:");
    for (i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    //in sorted array the elements will be in consecutive positions, two indices
    for (i=0;i<len;i++){
        if (arr[i]!=arr[i+1]){ //end of duplicates
            arr[j]=arr[i];
            j++;
        }
    }
    //need to iterate to one less than the length
    for (i=0;i<j;i++){
        printf("%d ",arr[i]);
    }


}
//https://www.youtube.com/watch?v=gf7vdIin0dk
