
#include <stdio.h>

struct feet_inches
{
    int feet;
    int inches;
};

int main() {
    struct feet_inches dist[3];
    //read in the distances
    int i=0;
    while (i<2){//first two elements 0,1
        printf("Enter the number of feet:\n");
        scanf("%d",&dist[i].feet);
        printf("Enter the number of inches:\n");
        scanf("%d",&dist[i].inches);
        i++;
    }
    //convert both to inches and add
    int dist_1_inches,dist_2_inches;
    dist_1_inches=dist[0].feet*12+dist[0].inches;
    dist_2_inches=dist[1].feet*12+dist[1].inches;
    dist[2].feet=(dist_1_inches+dist_2_inches)/12;
    dist[2].inches=(dist_1_inches+dist_2_inches)%12;
    
    //printing the result
    printf(" The number of feet:%d\n",dist[2].feet);
    printf(" The number of inches:%d\n",dist[2].inches);


}
