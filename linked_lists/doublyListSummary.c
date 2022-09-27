#include "doubly_linked_header.h"
/**
 * main - entry point of the program
 * return: 0 for success
 *
 */


list_t *head, *newnode, *tmp;


list_t *create_list(list_t *head);
void print_list(list_t *head);
list_t *insert_node(list_t *head);
 
int main(void)
{
	head = create_list(head);
	print_list(head);
	head = insert_node(head);
	print_list(head);

	return (0);
}

/**
 * create_list - creates a doubly linked list
 * @head: pointer that points to the first node
 * return: returns the head pointer
 */

list_t *create_list(list_t *head)
{
	int choice = 1;


	head = tmp = 0;
	newnode = malloc(sizeof(struct list));
	head = tmp = newnode;
	newnode->prev = 0;
	newnode->next = 0;

	printf("Enter the data you want to input into the list\n");
	scanf("%d", &newnode->data);
	
	while (choice == 1)
	{
		newnode = malloc(sizeof(struct list));
		tmp->next = newnode;
		newnode->prev = tmp;
		newnode->next = 0;
		tmp = newnode;

		printf("Enter the data you want to add to the list\n");
		scanf("%d", &newnode->data);

		printf("Enter 1 to add a newnode or any key to quit\n");
		scanf("%d", &choice);
	}

	return (head);
}

/**
 * print_list - prints the linked list
 * @head: the head pointer that holds the address of the first node
 * return: doesn't return anything
 */

void print_list(list_t *head)
{
	tmp = head;


	while (tmp != 0)
	{
		printf("%d"  " ", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}

/**
 * insert_node - inserts a node
 * @head: head pointer that holds the address of the first pointer
 * return: returns the head pointer
 */

list_t *insert_node(list_t *head)
{
	int choice;


	tmp = head;
	printf("Enter 1 to insert at beginning or any key to insert at the end\n");
	scanf("%d", &choice);
	newnode = malloc(sizeof(struct list));
	printf("Please enter value you want to add to list\n");
	scanf("%d", &newnode->data);

	if (choice == 1)
	{
		newnode->prev = 0;
		newnode->next = head;
		head = newnode;
	}

	else
	{
		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = newnode;
		newnode->prev = tmp;
		newnode->next = 0;
	}

	return (head);
}

