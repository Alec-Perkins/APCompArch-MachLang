// Exercises 8.5 - 8.8
// A. Perkins

#include <stdio.h>
#include <ctype.h>

void charHandling(int c);
void upperLower(char s[100]);

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