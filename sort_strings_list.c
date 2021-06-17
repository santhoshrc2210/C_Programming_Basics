
#include <stdio.h>
#include <string.h>

#define ITEMS 5
#define MAXCHAR 20

int main() {
    // insert code here...
    char str_list[ITEMS][MAXCHAR],smallest[20];
    int i=0,j,diff;
    printf("Enter the %d items:\n",ITEMS);
    while (i<ITEMS){
        scanf("%s",str_list[i]);
        i++;
    }
    //compare str items with each other using nested loop
    for (i=0;i<ITEMS;i++){
        for (j=i+1;j<ITEMS;j++){
            diff=strcmp(str_list[i],str_list[j]);
            if (diff<0){
                strcpy(smallest,str_list[i]);
                strcpy(str_list[i],str_list[j]);
                strcpy(str_list[j],smallest);
        }
        }
    }
    //print the sorted list
    printf("The sorted list:\n");
    for (i=0;i<ITEMS;i++){
        printf("%s\n",str_list[i]);
    }
}
