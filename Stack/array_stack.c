#include <stdio.h>
#define N 5

/**
 * A stack is a data structure which stores and retrieves data in a
 * LIFO(last in last out) manner. Insertig values(push()) is allowed at only one end.
 * Also deleting values(pop()) is allowed at only one end. pop() and push() done through
 * the same end.
 * In a stack, there is always a pointer to the last element, conventionally called top.
 * Stack can be implemented using either an array or linked list.
 *
 */
int stack[N]; //THE STACK
int top = -1; // TOP INITIALIZED TO -1 TO SHOW NOTHING IS IN THE STACK.


void pop();
void push(int x);
void peek();


int main()
{
	push(53);
	push(34);
	push(-23);
	pop();
	peek();
	pop();

	return (0);
}


/**
 * push: add element to the top
 * return: nothing
 */

void push(int x)
{
	if (top == N - 1)
		printf("Stack is full buddy!\n");

	else
	{
		top++;
		stack[top] = x;
	}
}
/**
 * pop: remove the topmost element
 * return: nothing
 */
void pop()
{
	if (top == -1)
	{
		printf("Nothing to pop buddy!\n");
	}

	else
	{
		printf("%d popped\n", stack[top]);
		top--;
	}
}

/**
 * peek: display the topmost element without removing it
 * return: Nothing
 */

void peek()
{
	if (top == -1)
		printf("Nothing to peek buddy!\n");

	else
		printf("%d peeked\n", stack[top]);
}
