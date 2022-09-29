#include <stdio.h>
/**
 * main - callback function practice
 *
 * return - 0 for success
 * A callback function is a function that calls another function
 * This makes use of function pointers
 */

char * negateString(char *);
//char * middleCharacter(char *);
char * calBack( char * (*ptr)(char *));
char *str = NULL;

int main(void)
{
	printf("Please enter string\n");
	scanf("%s", str);

	//char * negatePtr = NULL;
	//char * middlePtr = NULL;

	//negatePtr = calBack(negateString);
	//middlePtr = calBack(middleCharacter);
	printf("After my call backs, the negative is %s\n", calBack(negateString));
        //printf("The middle character of %s is %c\n", str, *middlePtr);

	return (0);
}

char * negateString(char * str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if ( *(str + i) <= 90)
			*(str + i) += 32;
		else 
			*(str + i) -= 32;
		i++;
	}
	
	return (str);
}

/*char * middleCharacter(char * str)
{
	int len = 0, i = 0;

	while (*(str + i) != '\0')
	{
		len++;
		i++;
	}
	return(str + (len / 2));
}
*/

char * calBack(char * (*ptr)(char *str))
{
	return (ptr(str));
}


