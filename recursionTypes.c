#include <stdio.h>
/**
 * main - entry point
 *
 * Two types of recursions are identified; tail and non-tail 
 *
 * Tail recursion is one in which the recursive function call is the last 
 * task run in the function
 *In non-tail recursion, other tasks are performed in the function even 
 *after the recursive function call
 *
 *In tail recursive functions, memory stacks are allocated even though the function
 * does not make use of them. For this reason, loops should be used instead of tail
 * recursive functions
 *
 */

void tailRecur(int);
void nonTailRecur(int);

int main(void)
{
	int a, b;

	printf("Enter a and b\n");
	scanf("%d %d", &a, &b);

	printf("Tail function call gives\n");
	tailRecur(a);
	printf("Non tail function call gives\n");
	nonTailRecur(a);

	return (0);
}

void tailRecur(int a)
{
	if (a < 0)
		return;
	else
	{
		printf("New a is %d\n", a);
		tailRecur(a - 1);
	}
}

void nonTailRecur(int a)
{
	if (a < 0)
		return;
	else
	{	printf("New a is %d\n", a);
		nonTailRecur(a - 1);
		printf("Old a is %d\n", a);
	}
}


