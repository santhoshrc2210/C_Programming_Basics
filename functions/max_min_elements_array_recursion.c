/**
 * C program to find maximum and minimum elements in array using recursion
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the array

/* Function declarations */
int maximum(int array[], int index, int len);
int minimum(int array[], int index, int len);


int main()
{
    int array[MAX_SIZE], N, max, min;
    int i;

    /* Input size and elements of array */
    printf("Enter size of the array: ");
    scanf("%d", &N);
    printf("Enter %d elements in array: ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }

    max = maximum(array, 0, N);
    min = minimum(array, 0, N);

    printf("Minimum element in array = %d\n", min);
    printf("Maximum element in array = %d\n", max);

    return 0;
}


/**
 * Recursive function to find maximum element in the given array.
 */
int maximum(int array[], int index, int len)
{
    int max;

    /*
     * Only last and second last element are left
     */
    if(index >= len-2)
    {
        if(array[index] > array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }


    /*
     * Recursively call maximum to find maximum element in
     * right side of the array from current index.
     */
    max = maximum(array, index + 1, len);

    /*
     * Compare the current array element with maximum
     * element on its right side
     */
    if(array[index] > max)
        return array[index];
    else
        return max;
}


/**
 * Recursive function to find minimum element in the array.
 */
int minimum(int array[], int index, int len)
{
    int min;

    if(index >= len-2)
    {
        if(array[index] < array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }

    min = minimum(array, index + 1, len);

    if(array[index] < min)
        return array[index];
    else
        return min;
}
//https://codeforwin.org/2016/04/c-program-to-find-maximum-and-minimum-in-array-using-recursion.html

