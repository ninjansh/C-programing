#include <stdio.h>
int main()
{
int a=0,b=1,c,n;
  printf("Enter a number : ");
  scanf("%d",&n);
  printf("series are: \n");
  print("%d%d",a,b);
  for(int i=2;i<=n;i++)
    {
      c=a+b;
      printf("%d",c);
      a=b;
      b=c;
    }
  return 0;
}
