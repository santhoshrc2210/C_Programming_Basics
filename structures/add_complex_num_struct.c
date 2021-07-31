#include <stdio.h>

struct cmplx_num{
    float real_part;
    float imag_part;
};

int main() {
    struct cmplx_num num_1, num_2,result;
    printf("Enter the real and imaginary part of number 1:");
    scanf("%f%f",&num_1.real_part,&num_1.imag_part);
    printf("Enter the real and imaginary part of number 2:");
    scanf("%f%f",&num_2.real_part,&num_2.imag_part);
    result.real_part=num_1.real_part+num_2.real_part;
    result.imag_part=num_1.imag_part+num_2.imag_part;
    printf("Real:%f\nComplex:%fi\n",result.real_part,result.imag_part);
    return 0;
}
