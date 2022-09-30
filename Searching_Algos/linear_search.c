#include <stdio.h>

/**
 * Linear search is a concept used to search for elements in an array
 * Here, all elements of the array are traversed until the particular element is found
 * If found, the index of the element is returned.
 * Linear searc has a time complexity of O(n)
 */


int main(void)
{
	int ages[10], index, location;
	int len = sizeof(ages) / sizeof(ages[0]);

	printf("please enter age to search its index\n");
	scanf("%d", &index);

	printf("Enter ages below \n");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &ages[i]);
		
	}

	for (int i = 0; i < len; i++)
	{
		if (ages[i] == index)
		{
			location = i;
			printf("Found it at index %d\n", location);
			return 0;
		}
	}

	printf("Value not found buddy!\n");


	return (0);
}
