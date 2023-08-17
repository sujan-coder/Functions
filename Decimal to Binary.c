#include <stdio.h>
#include <stdlib.h>
void db();
void db()
{
    int a[50],n,i;
    printf("enter the decimal number:\n");
    scanf("%d",&n);


    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }

}
int main()
{
db();
    return 0;
}
