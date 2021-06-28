#include <stdio.h>

int main() {
    // insert code here...
    int x;
    float temp,conv_temp;
    printf("1:Fahrenhiet to Celsius\n");
    printf("2.Celsius to Fahrenhiet\n");
    printf("Enter choice number:");
    scanf("%d",&x);
    
    switch (x){
        case 1: printf("Enter temprature in Fahrenheit:");
                scanf("%f",&temp);
                conv_temp=(temp-32)*5/9;
                printf("Temparature in Celsius:%f\n",conv_temp);
                break;
        case 2: printf("Enter temprature in Celsius:");
                scanf("%f",&temp);
                conv_temp=(temp*9/5)+32;
                printf("Temparature in Celsius:%f\n",conv_temp);
                break;
    }
        
    return 0;
}
