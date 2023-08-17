#include <stdio.h>
#include <stdlib.h>
void s();
void s()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    n*=n;
    printf("Square of number= %d\n",n);
}
int main()
{
    s();
    s();
    return 0;
}
