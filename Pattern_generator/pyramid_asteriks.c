//
//  main.c
//  pyramid_pattern_gen
//
//

#include <stdio.h>

int main() {
    // insert code here...
    int line=0,i;
    int num_lines=0,num_ast=0,first_ast_pos;
    num_ast=(num_lines*2)-1;
    first_ast_pos=num_lines;
    printf("Enter the number of lines: ");
    scanf("%d",&num_lines);
    //nth line has 2n-1 asteriks
    //position:total number of positions=2n-1(n=num_lines)
    //first asteriks will be at n
    for (line=1;line<=num_lines;line++){
        //case for first line
        printf("\n");
        if (line==1){
            for (i=1;i<num_lines;i++){
                printf(" ");
            }
            printf("*");
        }
        
        else if (line>=2){
        //case for 2 line
        //at pos first_ast_pos,-+1
        //print space, then ast
        //space:from 1 pos to first_ast_pos-line
        for (i=1;i<=(num_lines-line);i++){
            printf(" ");
        }
            //print asteriks
        for (i=(num_lines-line+1);i<(num_lines+line);i++){
            printf("*");
            }
        }
    }
    printf("\n");
}
