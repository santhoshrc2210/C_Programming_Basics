#include <stdio.h>

int main() {
    
    // AxB!=BxA
    //number of coloumns of A=number of rows of B for AxB
    //for now assuming that user will enter both matrixes that have valid rows and coloumns for multiplication
    int num_ra,num_ca,num_rb,num_cb,mat_a[100][100],mat_b[100][100],ra_idx,ca_idx;
    int rb_idx,cb_idx;
       //read in elements for matrix a
    printf("Enter number of rows of matrix a:\n");
    scanf("%d",&num_ra);
    printf("Enter number of coloumns of matrix a:\n");
    scanf("%d",&num_ca);
       //read in the elements
    printf("Enter the elements of matrix a:\n");
    for (ra_idx=0;ra_idx<num_ra;ra_idx++){
        for (ca_idx=0;ca_idx<num_ca;ca_idx++){
            scanf("%d",&mat_a[ra_idx][ca_idx]);
           }
       }
       //read in elements for matrix b
    printf("Enter number of rows of matrix b:\n");
    scanf("%d",&num_rb);
    printf("Enter number of coloumns of matrix b:\n");
    scanf("%d",&num_cb);

    printf("Enter the elements of matrix b:\n");
    for (rb_idx=0;rb_idx<num_rb;rb_idx++){
        for (cb_idx=0;cb_idx<num_cb;cb_idx++){
            scanf("%d",&mat_b[rb_idx][cb_idx]);
           }
       }

//multiply the two matrices
    int sum=0;
    for (ra_idx=0;ra_idx<num_ra;ra_idx++){//for each row in mat a
        for (cb_idx=0;cb_idx<num_cb;cb_idx++){//for each col in mat b
            for (ca_idx=0;ca_idx<num_ca;ca_idx++){//each col in that row of mat
                sum+=mat_a[ra_idx][ca_idx]*mat_b[ca_idx][cb_idx];//num of col of mat(a)= num rows of mat(b)
        }
            printf("%d ",sum);
            sum=0;
        }
        printf ("\n");
        }
    
}
