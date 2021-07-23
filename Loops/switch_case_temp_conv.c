#include <stdio.h>

int main() {
    int choice;
    float cel_temp,fah_temp;
    printf("Enter 1 for Celsius to Fahranheit\n");
    printf("Enter 2 for Fahranheit to Celsius\n");
    scanf("%d",&choice);
    switch (choice){
        case 1:
            printf("Enter temparature in Celsius:");
            scanf("%f",&cel_temp);
            fah_temp=(cel_temp*9/5)+32;
            printf("Temparature in Fahranheit:%f\n",fah_temp);
            break;
        case 2:
            printf("Enter temprature in Fahranheit:");
            scanf("%f",&fah_temp);
            cel_temp=(fah_temp-32)*5/9;
            printf("Temparature in Celsius:%f\n",cel_temp);
            break;
            
    }

    return 0;
}
