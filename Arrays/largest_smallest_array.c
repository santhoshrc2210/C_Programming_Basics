#include <stdio.h>

int main() {
    // initializing variables
    int len,i,j,arr[100],biggest_ele,smallest_ele;
    
    //creating array and reading it
    printf("Enter length of array:");
    scanf("%d",&len);
    printf("Enter array elements:\n");
    for (i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    //Finding the largest element
    for (i=0;i<len;i++)
        biggest_ele=arr[i];
        for (j=0;j<len;j++)
            if (arr[j]>biggest_ele)
                biggest_ele=arr[j];
    
    printf("Largest element:%d\n",biggest_ele);
    
    //Finding the smallest element
    for (i=0;i<len;i++)
        smallest_ele=arr[i];
        for (j=0;j<len;j++)
            if (arr[j]<smallest_ele)
                smallest_ele=arr[j];
    
    printf("Smallest element:%d\n",smallest_ele);

    return 0;
}
