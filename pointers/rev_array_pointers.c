
#include <stdio.h>

int main() {
    // reverse an array using pointers
    int *a,*b,arr[5]={1,7,3,8,5},i,j,temp;
    a=arr;//zeroth element address is stored in arr
    j=4;//len-1 index for last element
    b=&arr[j];//len
    for (i=0;i<2;i++){//iterate upto len/2
        //swap the two elements using
        temp=*a;
        *a=*b;
        *b=temp;
        a++;
        b--;
        
    }
    for (i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    
}
