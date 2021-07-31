#include <stdio.h>
struct student
{
char name[50];
int roll;
float marks;
}; 

int main() 
{ 
/* Program By Ghanendra Yadav
    Visit http://www.programmingwithbasics.com/
*/
int i, n; 

printf("Enter The Total Number Of Student : "); 
scanf("%d",&n); 

struct student s[n]; 

printf("\nEnter Information of students (Marks Sholud be Float Like 78.00):\n"); 

for(i=0;i<n;i++) 
{ 
printf("\nRoll No. : "); 
scanf("%d",&(s[i].roll)); 

printf("Name : "); 
scanf("%s",s[i].name); 

printf("Marks : "); 
scanf("%f",&(s[i].marks)); 
}

printf("\nDisplaying All Information of Students :\n"); 

for(i=0;i<n;i++) 
{ 
printf("\nRoll No. : %d",s[i].roll); 
printf("\nName : %s",s[i].name); 
printf("\nMarks : %f",s[i].marks); 
printf("\n\n"); 
} 
return 0; 

}


//https://www.programmingwithbasics.com/2016/04/c-program-to-store-students-information.html
