#include <stdio.h>

int main()
{
    //que 1
    float F = (38*9/5)+32;
    printf("%f",F);
    
    //que 2
   
    float baseSalary, hraPercentage, daPercentage, taPercentage;
    float grossSalary;

    
    printf("Enter Base Salary: ");
    scanf("%f", &baseSalary);

    printf("Enter HRA Percentage: ");
    scanf("%f", &hraPercentage);

    printf("Enter DA Percentage: ");
    scanf("%f", &daPercentage);

    printf("Enter TA Percentage: ");
    scanf("%f", &taPercentage);

    
    float hra = (hraPercentage / 100) * baseSalary;
    float da = (daPercentage / 100) * baseSalary;
    float ta = (taPercentage / 100) * baseSalary;

    
    grossSalary = baseSalary + hra + da + ta;

    
    printf("\nBase Salary: Rs. %.2f\n", baseSalary);
    printf("HRA: Rs. %.2f\n", hra);
    printf("DA: Rs. %.2f\n", da);
    printf("TA: Rs. %.2f\n", ta);
    printf("Gross Salary: Rs. %.2f\n", grossSalary);
    
    
    //que 3
    int ang1=65;
    int ang2=45;
    int ang3=180-(ang1+ang2);
    printf("%d",ang3);
    return 0;
}
