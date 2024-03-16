#include <stdio.h>
int main() 
{
int a,r,t,b;
printf("\n Enter principal amount : ");
scanf("%d",&a);
printf("\n Enter rate : ");
scanf("%d",&r);
printf("\n Enter time : ");
scanf("%d",&t);
b = (double)(a*r*t)/100;
printf("\n The simple interest on these factors are : %d",b);
return 0;
}
