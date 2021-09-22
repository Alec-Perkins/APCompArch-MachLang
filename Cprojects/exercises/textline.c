// Exercise 6-B textline
// A. Perkins
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowelCount(char str[]);
int consCount(char str[]);
void upper(char str[]);
void lower(char str[]);

int main()
{
    char str[] = "The quick brown fox jumped. The lazy dog, he was jumped over.";
    lower(str);
    printf("%s", str);
}

int vowelCount(char str[])
{
    int count = 0;
    for (size_t l=0; l<=strlen(str); ++l)
    {
        char letter = str[l];
        switch (letter)
        {
            case 'A':
            case 'a':
                count++;
                break;
            case 'E':
            case 'e':
                count++;
                break;
            case 'I':
            case 'i':
                count++;
                break;
            case 'O':
            case 'o':
                count++;
                break;
            case 'U':
            case 'u':
                count++;
                break;            
        }
    }
    return count;
}

int consCount(char str[])
{
    int count = 0;
    for (size_t l=0; l<=strlen(str); ++l)
    {
        char letter = str[l];
        // if ( 65 <= letter <= 90 || 97 <= letter <= 122)
        // {}
        switch (letter)
        {
            case 'A':
            case 'a':
                break;
            case 'E':
            case 'e':
                break;
            case 'I':
            case 'i':
                break;
            case 'O':
            case 'o':
                break;
            case 'U':
            case 'u':
                break;        
            case ' ':
            case '.':
            case ',':
            case '/':
            case '-':
            case '(':
            case ')':
            case '\0':
                break;        
            default:
                count++;
                break;    
        }
    }
    return count;
}

void upper(char str[])
{
    for (size_t l=0; l<=strlen(str); ++l)
    {
        str[l] = toupper(str[l]);
    }
}

void lower(char str[])
{
    for (size_t l=0; l<=strlen(str); ++l)
    {
        str[l] = tolower(str[l]);
    }
}
