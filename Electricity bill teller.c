#include <stdio.h>
int main()
{
int lastMonthUnit, currentMonthUnit;
int unitsConsumed;
float billAmount = 0.0;
printf("Enter the last month unit: ");
scanf("%d", &lastMonthUnit);
printf("Enter the current month unit: ");
scanf("%d", &currentMonthUnit);
unitsConsumed = currentMonthUnit - lastMonthUnit;
if (unitsConsumed <= 150) 
{
billAmount = unitsConsumed * 4.0;
} 
else if (unitsConsumed <= 300)
{
billAmount = 150 * 4.0 + (unitsConsumed - 150) * 6.0;
}
else if (unitsConsumed <= 500) {
billAmount = 150 * 4.0 + 150 * 6.0 + (unitsConsumed - 300) * 8.0;
}
else 
{
billAmount = 150 * 4.0 + 150 * 6.0 + 200 * 8.0 + (unitsConsumed - 500) * 10.0;
}
printf("Electricity Bill: %.2f Rs\n", billAmount);
return 0;
}
