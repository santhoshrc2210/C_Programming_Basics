#include <stdio.h>
#include <math.h>


int main() {
    //equation in the form ax2+bx+c=0
    //lf is for double that is more precise
    double a,b,c;
    double det,root1,root2,realPart,imagPart;
    printf("Enter the coeffecients:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    det=((b*b)-4*a*c);
    if (det>0){
        root1= (-b+sqrt(det))/(2*a);
        root2= (-b-sqrt(det))/(2*a);
        printf("root1:%lf,root2:%lf\n",root1,root2);
    }
    else if (det==0){
        root1=-b;
        root2=-b;
        printf("root1:%lf,root2:%lf\n",root1,root2);

    }
    else if (det<0){
        realPart = -b / (2 * a);
        imagPart = sqrt(-det) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi\n", realPart, imagPart, realPart, imagPart);
            }
    return 0;

}

//https://www.programiz.com/c-programming/examples/quadratic-roots
