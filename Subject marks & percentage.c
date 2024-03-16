#include <stdio.h>

int main()
{
    float eng, phy, chem, math, comp; 
    float total, percentage;
    printf("Enter marks of english: \n");
    scanf("%f", &eng);
   printf("Enter marks of physics: \n");
  scanf("%f", &phy);
   printf("Enter marks of chemistry: \n");
  scanf("%f", &chem);
   printf("Enter marks of maths: \n");
  scanf("%f", &math);
   printf("Enter marks of computer: \n");
  scanf("%f", &comp);
    total = eng + phy + chem + math + comp;
    percentage = (total / 500.0) * 100;
    printf("Total marks = %.2f\n", total);
    printf("Percentage = %.2f", percentage);
    printf("\n Ansh Jain \n enrollment no:- 0827CI221022");
  return 0;
}
