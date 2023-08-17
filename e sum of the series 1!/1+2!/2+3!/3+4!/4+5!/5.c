#include <stdio.h>
#include <stdlib.h>
void ss();
void ss()
{
    int i,sum=0,divide;
    printf("1!/1+2!/2+3!/3+4!/4+5!/5\n");
   for(int k=1;k<=5;k++)
    {
    int fact=1;
    for(i=1;i<=k;i++)
    {

        fact=fact*i;
       divide=fact/i;
    }
       sum+=divide;
    }

    printf("sum=%d",sum);
}

int main()
{
    ss();
return 0;
}
