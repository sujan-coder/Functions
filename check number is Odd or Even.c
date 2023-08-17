#include <stdio.h>
#include <stdlib.h>
void oe();
void oe()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is an even number",n);
    }
    else{
        printf("%d is an odd number",n);
    }

}
int main()
{
    oe();
    printf("\n");
    oe();
    return 0;
}
