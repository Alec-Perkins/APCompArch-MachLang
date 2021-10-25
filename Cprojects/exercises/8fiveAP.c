// Exercises 8.5 - 8.8
// A. Perkins

#include <stdio.h>
#include <ctype.h>

void charHandling(int c);

int main()
{
    printf("im thinking about it right now");
    return 0;
}

void charHandling(int c)
{
    printf("%d", isblank(c));
    printf("%d", isdigit(c));
    printf("%d", isalpha(c));
    printf("%d", isalnum(c));
    printf("%d", isxdigit(c));
    printf("%d", islower(c));
    printf("%d", isupper(c));
    printf("%c", tolower(c));
    printf("%c", toupper(c));
    printf("%d", isspace(c));
    printf("%d", iscntrl(c));
    printf("%d", ispunct(c));
    printf("%d", isprint(c));
    printf("%d", isgraph(c));
}