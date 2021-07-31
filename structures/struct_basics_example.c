#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
  //Ghanendra Yadav
    struct student s;
    
 printf("Enter The Information of Students :\n\n");
    
 printf("Enter Name : ");
    scanf("%s",s.name);
    
 printf("Enter Roll No. : ");
    scanf("%d",&s.roll);
    
    printf("Enter marks : ");
    scanf("%f",&s.marks);
    
    printf("\nDisplaying Information\n");
    
 printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("Marks: %.2f\n",s.marks);
    return 0;
}

//https://www.programmingwithbasics.com/2016/04/c-program-to-store-student-information.html
