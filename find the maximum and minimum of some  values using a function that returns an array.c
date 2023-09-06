// Write a C program to find the maximum and minimum of some  values using a function that returns an array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,mx,mn;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        {
    scanf("%d",&a[i]);
        }
    printf("Maximum:\n");
    mx=fmx(a, n);
    printf("%d\n",mx);

    printf("Minimum:\n");
    mn=fmn(a, n);
    printf("%d\n",mn);

    return 0;
}
int fmx(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}

int fmn(int a[],int n)
{
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }

    return min;
}
