#include <stdio.h>
#include <stdlib.h>
void la();
void la()
{
int i,n;
printf("enter the size of array:");
scanf("%d",&n);
int a[n];
printf("enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int j=0;j<=i;j++)
{
    if(a[0]<a[j])
    {
        a[0]=a[j];

    }
}
printf("%d is largest number",a[0]);
}
int main()
{
    la();

    return 0;
}
