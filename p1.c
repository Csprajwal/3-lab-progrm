#include <stdio.h> 
#include <stdlib.h> 
struct employee 
{ 
    int id; 
    char name[20]; 
    float salary; 
}; 
void main() 
{ 
    int i,n,ch,searchid; 
    struct employee emp[5]; 
    printf("Enter the number of employees: \n"); 
    scanf("%d",&n); 
    printf("Enter %d employee details: \n", n); 
    for(i=0;i<n;i++) 
    { 
        printf("Enter employee id: \n"); 
        scanf("%d",&emp[i].id); 
        printf("Enter employee name: \n"); 
        scanf("%s",emp[i].name); 
        printf("Enter employee salary: \n"); 
        scanf("%f",&emp[i].salary); 
    } 
    while(1) 
    { 
        printf(" 1)Display \n 2)Search \n 3)Exit \n Enter your choice:\n"); 
        scanf("%d",&ch); 
        switch(ch) 
        { 
            case 1 :for(i=0;i<n;i++) 
                    { 
                        printf("\Employee id: %d\tName: %s\tSalary: 
Rs.%f\n",emp[i].id,emp[i].name,emp[i].salary); 
                    } 
                    break; 
            case 2 :printf("Enter Emp ID to be searched:\n"); 
                    scanf("%d",&searchid); 
                    for(i=0;i<n;i++) 
                    { 
                        if(emp[i].id==searchid) 
                        { 
                            printf("Employee id: %d\tName: %s\tSalary: 
Rs.%f\n",emp[i].id,emp[i].name,emp[i].salary); 
                            break; 
                        } 
                    } 
                    if(i==n) 
                    printf("Empl0yee ID not found\n"); 
                    break; 
            case 3:exit(0); 
        } 
    } 
}
