//Insertion of  number in different positions.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,size,a[50],c,num;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be inserted:");
    scanf("%d",&num);
    printf("1->Specific position\n2->Begining\n3->End\n");
    printf("\n");
    printf("Enter the option:\n");
    scanf("%d",&c);
    printf("\n");
    //printf("After Insertion:\n");
    switch (c)
    {
    case 1:spec(a,size,num);
    break;
    case 2:beg(a,size,num);
    break;
    case 3:end(a,size,num);
    break;
    default:printf("Invalid option");
    break;
    }
    return 0;
}
int spec(int a[],int size,int num)
{
    int pos,i;
    printf("Enter the specific position to be inserted:");
    scanf("%d",&pos);
    printf("After Insertion:\n");
    if(pos<0||pos>size+1)
{
printf("Invalid position\n");
}
else
{
   for(i=size-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }


    a[pos-1]=num;//insert the data
    size++;
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

int beg(int a[],int size,int num)
{
    int i;
    printf("After Insertion:\n");

     for(i=size-1;i>=0;i--)
    {
        a[i+1]=a[i];
    }

    a[0]=num;//insert the data
    size++;

    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}


int end(int a[],int size,int num)
{
    int i;
    printf("After Insertion:\n");

    a[size]=num;//insert the data
    size++;

    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}

