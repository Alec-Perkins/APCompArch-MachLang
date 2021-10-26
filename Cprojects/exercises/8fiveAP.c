// Exercises 8.5 - 8.8
// A. Perkins

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void charHandling(int c);
void upperLower(char s[100]);
void strToInt(char str1[10], char str2[10], char str3[10], char str4[10]);

int main()
{
	char c = 'a';
	int cInt = c;
	charHandling(cInt);

	char s[100];
	printf("\n8.6:\n");
	printf("Enter a string less that or equal to 100 characters:\n");
	scanf("%[^\n]", s);
	upperLower(s);

	printf("\n\n8.7:\n");
	char str1[10];
	char str2[10];
	char str3[10];
	char str4[10];
	puts("Enter 4 numbers under 10 digits with a space between each number:");
	scanf("%s %s %s %s", str1, str2, str3, str4);
	strToInt(str1, str2, str3, str4);
	return 0;
}

void charHandling(int c)
{
	printf("\n8.5:\n");
	printf("%d\n", isblank(c));
	printf("%d\n", isdigit(c));
	printf("%d\n", isalpha(c));
	printf("%d\n", isalnum(c));
	printf("%d\n", isxdigit(c));
	printf("%d\n", islower(c));
	printf("%d\n", isupper(c));
	printf("%c\n", tolower(c));
	printf("%c\n", toupper(c));
	printf("%d\n", isspace(c));
	printf("%d\n", iscntrl(c));
	printf("%d\n", ispunct(c));
	printf("%d\n", isprint(c));
	printf("%d\n", isgraph(c));
}

void upperLower(char s[100])
{
	char* sTemp = s;
	while (*s != '\0')
	{
		printf("%c", toupper(*s));
		s++;
	}
	s = sTemp;
	printf("\n");
	while (*s != '\0')
	{
		printf("%c", tolower(*s));
		s++;
	}
}

void strToInt(char str1[10], char str2[10], char str3[10], char str4[10])
{
	int int1 = atoi(str1);
	int int2 = atoi(str2);
	int int3 = atoi(str3);
	int int4 = atoi(str4);
	printf("Sum: %d", int1 + int2 + int3 + int4);
}

