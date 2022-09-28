#include <stdio.h>
/**
 * main - entry point
 *
 * factorial - performs recursion to give the factorial 
 * of an inputted number
 *
 * return - Always 0 (for success)
 *
 */

int factorial(int);

int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%d\n", factorial(a));

	return (0);
}


int factorial(int num)
{
	if (num == 0)
		printf("Great!\n");
	int sum = num + factorial(num - 1);
	printf("Sum is %d\n", sum);
	return (sum);
}

/** This is how the recursive function above works
 * Lets take num to be 4;
 *
 *since num != 0;

 factorial(4 - 1) will be returned
 Now num = 3;

 Also, 3 != 0 so factorial(3 - 1);
 Now num = 2;

 Also, 2 != 0, so factorial(2 - 1) is returned;
 now num = 1;

 Also, 1 != 0; factorial(1 - 1) is returned
 num = 0;

 When you check now, num = 0, Great is printed and control given back to 
 the function that called it.*/


