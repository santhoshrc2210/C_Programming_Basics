#include <stdio.h>
#define MAX_SIZE 100



int sumArray_elements(int arr[], int start, int len)
{
    int sum=0;
    /* Recursion base condition */
    if(start >= len){
        //do nothing
    }
    else
        sum=sum+ arr[start] + sumArray_elements(arr, start + 1, len);
    return sum;
}

int main()
{
    int arr[MAX_SIZE];
    int N, i;
    
    /* Input size and elements in array */
    printf("Enter size of the array: ");
    scanf("%d", &N);
    printf("Enter elements in the array: ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
        
    /* Prints array recursively */
    printf("Sum of elements in the array: %d\n", sumArray_elements(arr, 0, N));
    return 0;
}



//derived from:
//https://codeforwin.org/2016/03/c-program-to-print-elements-of-array-using-recursion.html
