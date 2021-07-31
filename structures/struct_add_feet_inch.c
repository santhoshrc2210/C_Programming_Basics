#include <stdio.h>

struct dist{
    int feet;
    int inches;
};

int main() {
    struct dist dist_1, dist_2,result_dist;
    int total_dist_inch;
    printf("Enter the first distance in feet and inches:\n");
    scanf("%d%d",&dist_1.feet,&dist_1.inches);
    printf("Enter the second distance in feet and inches:\n");
    scanf("%d%d",&dist_2.feet,&dist_2.inches);
    total_dist_inch= (dist_1.feet+dist_2.feet)*12+dist_1.inches+dist_2.inches;
    result_dist.feet=total_dist_inch/12;
    result_dist.inches=total_dist_inch%12;
    printf("Feet:%d\nInches:%d\n",result_dist.feet,result_dist.inches);
    return 0;
}
