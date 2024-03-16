#include <stdio.h>
int main() {
    float annualSalary, taxAmount;
    printf("Enter the annual salary: ");
    scanf("%f", &annualSalary);
    if (annualSalary <= 250000) {
        taxAmount = 0.0;
    } else if (annualSalary <= 500000) {
        taxAmount = (annualSalary - 250000) * 0.1;
    } else if (annualSalary <= 1000000) {
        taxAmount = 25000 + (annualSalary - 500000) * 0.15;
    } else {
        taxAmount = 125000 + (annualSalary - 1000000) * 0.2;
    }
    printf("Income Tax: %.2f Rs\n", taxAmount);
  return 0;
}
