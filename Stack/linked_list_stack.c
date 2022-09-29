#include <stdio.h>
#include <stdlib.h>


/**
 * struct data structure for the nodes of the stack
 * data - data part
 * top - link/pointer part
 */

typedef struct node
{
	int data;
	struct node *next;
}stack;

void push(int x);
void pop();
void peek();

stack *top = NULL, *newnode;  // POINTER TO BE USED FOR MEMORY ALLOCATION

int main(void)
{
	push(87);
	push(43);
	push(83);
	peek();
	pop();
	push(3);
	peek();

	return (0);
}

/**
 * push: insert an element at the top
 * return: nothing
 */

void push(int x)
{
	newnode = malloc(sizeof(stack));
	newnode->data = x;
	newnode->next = top;
	top = newnode;
}

/**
 * pop: remove he topmost element
 * return: nothing
 */

void pop()
{
	if (top == NULL)
		printf("Nothing to pop buddy!");

	else
	{
		stack *tmp = top; //A POINTER TO USE TO FREE THE MEMORY SPACE OF THE POPPED ITEM

		printf("%d popped\n", top->data);
		top = top->next;
		free(tmp);
	}
}

/**
 * peek: display the topmost element
 * return: nothing
 */

void peek()
{
	if (top == NULL)
		printf("Nothing to peek buddy!\n");

	else
		printf("%d peeked\n", top->data);

}

