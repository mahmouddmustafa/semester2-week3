
#include <stdio.h>
#include <math.h>

/*
 * Potrfolio submission
 * Name: Mahmoud Ahmed Mohammed Samir Mustafa   
 * ID: 201868040
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 36250.0;         // Salary
    float NI = 0.08;                // National Insurance to 8%
    float tax = 0.15;               // Tax after NI to 15%
    float net_salary;         // Final Take Home Salary
    float b4_tax;                   // Amount after applying NI deduction 
    float NI_contribution;          // National Insurance Contribution
    float tax_contribution;         // Tax Contribution

    // calculate the deductions and final take-home salary
    tax_contribution = 0.0;
    NI_contribution = salary * NI;
    b4_tax = salary - NI_contribution;
    if (b4_tax > 12500) {
      tax_contribution = ((b4_tax - 12500) * tax);
    }

    net_salary = b4_tax - tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", NI_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", net_salary);

    return 0;
 }