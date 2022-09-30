#include <stdio.h>


/**
 * Binary search is a searching technique that uses the concept of
 * "Divide and conquer"(This means it divides the array into 2 and finds which half the searched data is.
 * It repeats this until the data is found.
 * Its time complexity is logn
 */

/**
 * binary_search: function to searc for value
 * @ages: array to be searched
 * @age_len: length of array
 * @data: the data to search for in the array
 */

int binary_search(int ages[], int age_len, int data)
{
	int l = 0, r = age_len - 1, mid = 0;

	while(l < r)
	{
		mid = (l + r) / 2;

		if (data == ages[mid])
			return mid;

		else if(data < ages[mid])
			r = mid - 1;

		else
			l = mid + 1;
	}

	return -1;

	/*
	 * if (r > l)
		return -1;

	else if (data == ages[mid]

	*/
}


int main(void)
{
	int ages[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int age_len = 10;
	int data = 8;

	printf("%d is the location\n", binary_search(ages, age_len, data));

	return (0);
}
