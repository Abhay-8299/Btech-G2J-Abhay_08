#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age of person");
    scanf("%d",&age);
    if(age>0 &&age<=10)
    printf("Child");
    else if (age>10 && age<=19)
    printf("Teenage");
    else if (age>19 && age<=40)
    printf("Young");
    else 
    printf("Old");
    
    return 0;
}
