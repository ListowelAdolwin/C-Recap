#include <stdio.h>
#include <stdlib.h>
/**
 * main - macros explanation
 *
 * 1.Macros are used to define global constants, functions are others
 * 2.Their names usually are all capitals to distinguish between them and and normal variables
 * 3.Its syntax is #define MIN 12 . NOTE SEMI-COLON AFTER.
 * 4.In the above, MIN is replace by 12 during compilation. This makes codes more readable
 * 5.Macros can be undefined using #undef
 * 6.Also, there are predefined macros one can use for various purposes
 *  i) #ifdef MACRO: checks to see if a macro is defined in a source code. It true is returned, 
 *     then some block of statements will be carried out. If not, they're skipped
 *  ii)#ifndef MACRO: checks to see if a macro is not defined in a source code.If true is returned,
 *     particular code block is carried out.
 * Return: Always 0
 */

#define MIN 10
#define SUM(a, b) (a + b)
#define CMP(a, b)  if (a < b)\
			 printf("%d is smaller\n", a);\
		   else\
			printf("%d is smaller\n", b)
int main(void)
{
	int x = MIN;
	int y = 15;

	printf("The sum of %d and %d is %d\n", x, y, SUM(x, y));
	CMP(x, y);

	return (0);
}
