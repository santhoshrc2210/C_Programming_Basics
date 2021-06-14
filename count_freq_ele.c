//create an array without duplicates
// for each element in the new array count the number of times in the old array
//

#include <stdio.h>

int main() {
    // insert code here...
    int len,i,idx,j=0,arr[50],new_arr[50],len_new=0,dup_arr[50],count=0;
    printf("Enter length of array:");
    scanf("%d",&len);
    printf("Enter array elements:\n");
    for (i=0;i<len;i++)
        scanf("%d",&arr[i]);
    
    //create a duplicate array
    for (i=0;i<len;i++)
        dup_arr[i]=arr[i];
    
    //looping through array twice to search for duplicate
    for (i=0;i<len;i++){
        for (idx=i+1;idx<len;idx++){
            if (arr[i]==arr[idx]){
                //placing -1 at the position of the duplicate
                arr[idx]=-1;
            }
        }
    }
    //creating a new array without duplicate elements removing -1
    for (i=0;i<len;i++){
        if (arr[i]!=-1){
            new_arr[j]=arr[i];
            j++;
            len_new++;
    }
    }
    //counting.....
    for (i=0;i<len_new;i++){
        count=0;
        for (j=0;j<len;j++){
            if (dup_arr[j]==new_arr[i]){
                count++;
            }
        }
        printf("Element %d occurs %d times\n",new_arr[i],count);
            
    }
    }

