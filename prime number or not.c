
#include <stdio.h>
#include <stdlib.h>
void prime();
void prime()
{
    int i,a,b,count=0,n;
    printf("Prime number ranges from: ");
    scanf("%d",&a);
    printf("Till: ");
    scanf("%d",&b);


    for(i=a;i<=b;i++)
    {
        n=i;
     count=0;
    for(int j=2;j<=i;j++)
{
    if(i%j==0)
    {
    count++;
    }
}
    if(count==1)
    {
      printf("%d ", i);
    }
    }


    }



int main()
{
    prime();
    return 0;
}

/*

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a,b,j;
    printf("Range from:");
    scanf("%d",&a);
    printf("Till:");
    scanf("%d",&b);
     printf("\nPrime number.. ");

    for(i=a;i<=b;i++)
    {
         int flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)

            printf("%d ",i);

    }
    return 0;
}
*/
