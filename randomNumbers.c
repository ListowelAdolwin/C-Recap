#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates a random number
 * Return: Always 0
 * 1.rand() is a function in stdlib header used to
 *   generate random numbers
 * 2.srand(unsigned int seed) is what determines the random number
 *   to be generated. Every new seed value generates a new random
 *   number. 
 * 3.To generate a series of random numbers, time(0) is used as the
 *   argument for srand since time(0) will always return a different
 *   number anytime it is called
 */

int main(void)
{
	int n;

	/*BELOW GENERATES TEN DIFFERENT RANDOM NUMBERS*/
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		n = rand();
		printf("%d\n", n);
	}

	return (0);
}

