#include <stdio.h>
struct employee
{
    char    name[30];
    int     age;
    int phno;
    float   salary;
};
 
int main()
{
    struct employee emp;
    printf("\nEnter details :\n");
    printf("Name :");  
	        gets(emp.name);
    printf("Age :"); 
	           scanf("%d",&emp.age);
    printf("Salary :"); 
	       scanf("%f",&emp.salary);
	       printf("Phone number:");
	       scanf("%d",&emp.phno);
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Age: %d"     ,emp.age);
    printf("Salary: %f\n",emp.salary);
    printf("Phone number:%d\n",emp.phno);
    return 0;
}
