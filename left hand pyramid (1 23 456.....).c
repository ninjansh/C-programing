#include <stdio.h>
int main()
{
    int i,j,c=1;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",c);
            c=c+1;
        }
        printf("\n");
        if(c>=10)
        break;
    }
    return 0;
}
