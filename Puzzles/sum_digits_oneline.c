#include<stdio.h>
main() {
   int n, sum = 0;
   printf("Enter a number: "); //take the number from the user
   scanf("%d", &n);
   for(; n > 0; sum += n%10, n/= 10) {
   }
   printf("The sum of digits: %d", sum);
}

//https://www.tutorialspoint.com/c-program-to-sum-the-digits-of-a-given-number-in-single-statement
