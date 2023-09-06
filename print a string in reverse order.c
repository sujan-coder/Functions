//Write a C program to print a string in reverse order
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    printf("Enter the string:\n");
    scanf("%[^\n]", s);
    printf("Reversed String:\n");
    str(s);
    return 0;
}

int str(char s[])
{
    int i,l;
    l=strlen(s);
    for(i=l-1;i>=0;i--)

    printf("%c",s[i]);

}
