#include <stdio.h>

int main() {
    // add two matrices using pointers and store in the mat A
    int mat_a[3][3]={0,1,2,4,5,6,7 ,8 ,9},mat_b[3][3]={0,1,2,4,5,6,7,8,9},res[3][3];
    int i,j;
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            *(*(res+i)+j)=*(*(mat_a+i)+j) + *(*(mat_b+i)+j);
        }
    }
    for (i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf(" %d",*(*(res+i)+j));
        }
    }
    printf("\n");
    
}
