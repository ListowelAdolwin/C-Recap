#include <stdio.h>
#include <stdarg.h>


int sum(int args1, ...)
{
	int sum = 0, i;
	va_list ap;

	va_start(ap, args1);
	for (i = args1; i > 5; i = va_arg(ap, int))
	{
		printf("%d", i);
	}
	va_end(ap);
	return (sum);
}


int main(void)
{
	printf("%d\n", sum(3, 5, 2));
	return (0);
}
