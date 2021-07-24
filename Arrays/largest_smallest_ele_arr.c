#include <stdio.h>

int main() {
    int arr[10],largest_ele,i,len,smallest_ele;
    
    //for array index starts from zero to len-1
    printf("Enter the length of array:");
    scanf("%d",&len);
    //initialize array with inputs from user
    printf("Enter elements of array:");
    for (i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    
    //find the largest element by the scanning through the array
    //assume the first element is the largest and update
    largest_ele=arr[0];
    for (i=0;i<len;i++){
        if (arr[i]>largest_ele){
            largest_ele=arr[i];
        }
    }
    printf("Largest element:%d\n",largest_ele);
    
    //using similar method for finding the smallest element
    smallest_ele=arr[0];
    for (i=0;i<len;i++){
        if (arr[i]<smallest_ele){
            smallest_ele=arr[i];
        }
    }
    printf("Smallest element:%d\n",smallest_ele);


}
