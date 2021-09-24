// Exercise 6-B textline
// A. Perkins
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowelCount(char str[]);
int consCount(char str[]);
void upper(char str[]);
void lower(char str[]);
void display(char str[]);

int main()
{
    char choice = 'm';
    char str[100];
    printf("Input a line of text, up to 100 characters:\n");
    scanf("%s", str);
    while (choice != 'x' || choice != 'X')
    {
        puts("A)  Count the number of vowels in the string\nB)  Count the number of consonants in the string\nC)  Convert the string to uppercase\nD)  Convert the string to lowercase\nE)  Display the current string\nF)  Enter another string\n\nM)  Display this menu\nX)  Exit the program\n");
        puts("Enter your menu selection:");
        scanf("%s", &choice);
        switch (choice)
        {
            case 'A':
            case 'a':
                printf("Number of vowels: %d\n", vowelCount(str));
                break;
            case 'B':
            case 'b':
                printf("Number of consonants: %d\n", consCount(str));
                break;
            case 'C':
            case 'c':
                upper(str);
                break;
            case 'D':
            case 'd':
                lower(str);
                break;
            case 'E':
            case 'e':
                puts("The string:\n");
                display(str);
                break;            
            case 'F':
            case 'f':
                printf("Input a line of text, up to 100 characters:\n");
                scanf("%s", str);
                break;
            case 'M':
            case 'm':
                puts("A)  Count the number of vowels in the string\nB)  Count the number of consonants in the string\nC)  Convert the string to uppercase\nD)  Convert the string to lowercase\nE)  Display the current string\nF)  Enter another string\n\nM)  Display this menu\nX)  Exit the program\n");
                break;
            default:
                puts("Incorrect menu selection entered.\n");
                break;
        }
        printf("Enter a new menu selection:\n");
        scanf("%s", choice);
        printf("%s", choice);
    }
    puts("Goodbye");
    return 0;
}

int vowelCount(char str[])
{
    int count = 0;
    for (size_t l=0; str[l] != '\0'; ++l)
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
    for (size_t l=0; str[l] != '\0'; ++l)
    {
        char letter = str[l];
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
    for (size_t l=0; str[l] != '\0'; ++l)
    {
        str[l] = toupper(str[l]);
    }
}

void lower(char str[])
{
    for (size_t l=0; str[l] != '\0'; ++l)
    {
        str[l] = tolower(str[l]);
    }
}

void display(char str[])
{
    printf("%s\n", str);
}