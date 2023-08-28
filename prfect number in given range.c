//Write a program in C to print all perfect numbers in a given range eusing the function.
#include <stdio.h>
#include <stdlib.h>

int perf(int num);

int main() 
{
    int a, b;
    printf("Enter the range from: ");
    scanf("%d", &a);
    printf("Enter the range till: ");
    scanf("%d", &b);

    printf("Perfect numbers in the range %d to %d are:\n", a, b);
    for (int i = a; i <= b; i++)
        {
        if (perf(i) == i) 
            {
            printf("%d\n", i);
            }
        }

    return 0;
}

int perf(int num) {
    int sum = 0;
    for (int j = 1; j < num; j++) 
    {
        if (num % j == 0) 
            {
            sum += j;
            }
    }
    return sum;
}
 
