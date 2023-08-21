// C program to check if two strings
// are anagrams of each other
#include <stdio.h>
#define no_of_char 256

int areAnagram(char* str1, char* str2)
{
	int count1[no_of_char] = { 0 };
	int count2[no_of_char] = { 0 };
	int i;

	for (i = 0; str1[i] && str2[i]; i++) {
		count1[str1[i]]++;
		count2[str2[i]]++;
	}

	if (str1[i] || str2[i])
		return 0;

	for (i = 0; i < no_of_char; i++)
		if (count1[i] != count2[i])
			return 0;

	return 1;
}

int main()
{
    char a[100],b[100];
    printf("enter the strings:\n");
    scanf("%s%s",&a,&b);


	if (areAnagram(a, b))
		printf("The two strings are anagram of each other");
	else
		printf("The two strings are not anagram of each "
			"other");
	return 0;
}

