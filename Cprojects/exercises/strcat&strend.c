// Exercises strcat & strend
// A. Perkins

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

void strcat(char s[], char t[]);

int main()
{
	char s[] = "Does this work";
	char t[] = "No it does not";
	strcat(s, t);

}
	
// void strcat(char s[], char t[])
// {  
// 	int i, j;  i = j = 0;
// 	while (s[i] != '\0') /* find end of s */
// 		i++;
// 	while ((s[i++] = t[j++]) != '\0'); /* copy t */
// }

void strcat(char s[], char t[])
{  
	int i, j;  i = j = 0;
	while (s != '\0') /* find end of s */
		i++;
	while ((s[i++] = t[j++]) != '\0'); /* copy t */

}
	
	// write strend here