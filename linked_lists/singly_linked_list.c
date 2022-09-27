#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * return: Always 0 for success
 *
 */

int main(void)
{
	struct node
	{
		int data;
		struct node *next;
	};

	struct node *head, *tmp, *newnode;
	head = tmp = 0;
	newnode = malloc(sizeof(struct node));
	head = tmp =  newnode;
	printf("Please enter the first data value of the linked list: ");
	scanf("%d", &newnode->data);
	newnode->next = 0;

	newnode = malloc(sizeof(struct node));
	printf("Please enter the second data value of the linked list: ");
	scanf("%d", &newnode->data);
	tmp->next = newnode;

	newnode = malloc(sizeof(struct node));
	tmp = tmp->next;
	printf("Please enter the third data value of the linked list: ");
	scanf("%d", &newnode->data);
	tmp->next = newnode;


	printf("The value in head pointer is %d\n", head->data);
	printf("The value at the second node is %d\n", (head->next)->data);
	printf("The value at the third node is %d\n", (tmp->next)->data);

	return (0);
}
