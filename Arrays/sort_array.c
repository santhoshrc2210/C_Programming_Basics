// solution: https://www.sanfoundry.com/c-program-sort-array-ascending-order/
//In the nested loop, the each element will be compared to all the elements below it.
// In case the element is greater than the element present below it, then they are interchange

#include <stdio.h>

int main() {
    // insert code here...
    int len,i,j,arr[100],smallest_ele;
    
    //creating array and reading it
    printf("Enter length of array:");
    scanf("%d",&len);
    printf("Enter array elements:\n");
    for (i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<len;i++){
        for (j=i+1;j<len;j++){
            if (arr[j]<arr[i]){
                smallest_ele=arr[i];
                arr[i]=arr[j];
                arr[j]=smallest_ele;
            }
        }
    }
    
    //print sorted array
    for (i=0;i<len;i++){
        printf("%d\n",arr[i]);
    }
      
 }
