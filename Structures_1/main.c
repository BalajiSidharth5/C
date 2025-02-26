#include <stdio.h>


struct employee {
        char name[100];
        char hireDate[11]; 
        float salary;
    };
    
    
int main(int argc, char **argv)
{
    
    
    struct employee firstEmp;
    
    printf("Enter your name: ");
    scanf("%s", firstEmp.name);
    printf("\nEnter your hire date: ");
    scanf("%s", firstEmp.hireDate);
    printf("\nEnter your salary: ");
    scanf("%f", &firstEmp.salary);
    
    printf("Your information:\n\n");
    printf("Name: %s", firstEmp.name);
    printf("\nHire date: %s", firstEmp.hireDate);
    printf("\nSalary: %.2f\n\n", firstEmp.salary);
    
    return 0;
}
