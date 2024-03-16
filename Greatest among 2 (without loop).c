#include <stdio.h>
int main ()
{
  int x,y,z;
  printf("Enter any 2 numbers : ");
  scanf("%d%d",&x,&y);
  z=x>y?x:y;
  printf("The greatest number is : %d",z);
  return 0;
}
