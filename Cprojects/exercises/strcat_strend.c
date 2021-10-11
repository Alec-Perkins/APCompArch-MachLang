// Exercises strcat & strend
// A. Perkins

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/** *
 * From K&R*
 * Exercise 5-3. Write a pointer version of the function strcat that we showed in Chapter 2:*
 * strcat(s,t) copies the string t to the end of s.
 * Exercise 5-4. Write the function strend(s,t), which returns 1 if the string toccurs at the
 *
 * end of the string s, and zero otherwise.
 * /
 * // Write your main method here
 * strcat: concatenate t to end of s; s must be big enough */
 /* rewrite so that it uses pointer notation instead of array notation */

void strcat2(char *s, char *t);
int strend2(char *s, char *t);


int main()
{
	// Testing strcat2:
	char s[100]; // creates string long enough to hold both strings
	char *s_init = "Add something to this:"; // first string
	printf("\nString 1: %s\n", s_init);

	// copying first string into holder string:
	int i = 0;
	while (*s_init != '\0') {
		s[i] = *s_init;
		i++;
		s_init++;
	}
	s[i] = '\0';

	char *t = "something"; // second string
	printf("String 2: %s\n", t);
	printf("Expected result: Add something to this:somthing\n");
	strcat(s, t);
	printf("Actual: %s\n\n", s);


	// Testing strend2 (Test #1):
	s_init = "Will this wOrK"; // first string
	printf("String 1: %s\n", s_init);
	// copying first string into holder string:
	i = 0;
	while (*s_init != '\0') {
		s[i] = *s_init;
		i++;
		s_init++;
	}
	s[i] = '\0';

	t = "work"; // second string
	printf("String 2: %s\n", t);
	printf("Expected result: 1\n");
	printf("Actual: %d\n\n", strend2(s, t) );


	// Testing strend2 (Test #2):
	s_init = "This shouldn't work"; // first string
	printf("String 1: %s\n", s_init);
	// copying first string into holder string:
	i = 0;
	while (*s_init != '\0') {
		s[i] = *s_init;
		i++;
		s_init++;
	}
	s[i] = '\0';

	t = "woke"; // second string
	printf("String 2: %s\n", t);
	printf("Expected result: 0\n");
	printf("Actual: %d\n\n", strend2(s, t) );


	return 0;
}

void strcat2(char *s, char *t)
{
	while (*s)
		s++;
	while ((*s++ = *t++));
}

int strend2(char *s, char *t)
{
	int answer = 1;
	while (*s) // find end of string
		s++;
	size_t length = strlen(t); // length of target string
	s -= (length);
	while (*s)
	{
		if(tolower(*s) != tolower(*t)) { answer = 0; }
		s++;
		t++;
	}
	return answer;
}

