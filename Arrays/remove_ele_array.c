#include <stdio.h>

int main() {
    // insert code here...
    int len,i,arr[100],pos,new_arr[100],j=0;
    
    printf("Enter length of array:");
    scanf("%d",&len);
    printf("Enter array elements:\n");
    for (i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of the item to be removed:");
    scanf("%d",&pos);
    
    j=0;
    for (i=0;i<len;i++){
        if (i!=pos){
            new_arr[j]=arr[i];
            j++;
        }
    }
    for (i=0;i<len-1;i++){
        printf("%d\n",new_arr[i]);
    }
}
