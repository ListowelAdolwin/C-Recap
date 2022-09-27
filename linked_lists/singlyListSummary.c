#include "linked_lists_header.h"

//singly_list_t *newnode, *tmp;
//singly_list_t *head;

/**
 * main - entry point of the program
 * return: 0 for success
 *
 * create_list: Creates a linked list and returns a pointer to the first node
 *
 * rev_list: reverses a linked list and returns a pointer to the first node
 *
 * insert_node - inserts a node to a linked list
 *
 * del_node - deletes a node from a linked list
 *
 * print_list - prints all elements of a list
 *
 */

/**
 * Linked lists are data structures whose addresses in memory are random.
 * Unlike arrays, linked lists are stored in different memory locations.
 * Accessing them is possible by a pointer that points to the first element of the list.
 * Linked lists have two parts: the data part(the actual data the user stores) and the node(a pointer to the next element in the list);
 * Accessing data in a linked list is sequencial. No random access is allowed. It takes the order O(n)
 */

singly_list_t *newnode, *tmp;
singly_list_t *head;



/* FUNCTION DECLARATIONS */

singly_list_t *create_list(singly_list_t *head); /* CREATE THE LIST FUNCTION */

singly_list_t *insert_node(singly_list_t *head); /* INSERT THE NODE FUNCTION */

singly_list_t *del_node(singly_list_t *head);   /* DELETE THE NODE FUNCTION */

singly_list_t *rev_node(singly_list_t *head);  /* REVERSE THE NODE FUNCTION */

singly_list_t *print_list(singly_list_t *head); /* PRINT THE NODE FUNCTION */

singly_list_t *insert_values(singly_list_t *head); /* INSERT VALUES INTO LIST FUNCTION */


int main(void)
{
	head = print_list(head);
	head = create_list(head);
	//head = insert_values(head);
	//head = print_list(head);
	head = insert_node(head);
	head = insert_values(head);
	printf("List before deletion\n");
	//head = print_list(head);
	head = del_node(head);
	//printf("List after deletion\n");
	head = print_list(head);

	return (0);
}

singly_list_t *create_list(singly_list_t *head)
{
	int n, i;

	printf("How many numbers do you want to store?\n");
	scanf("%d", &n);

	newnode = malloc(sizeof(struct singly_list));
	tmp = head = newnode;

	i = 1;
	while(i < n)
	{
		newnode = malloc(sizeof(struct singly_list));
		tmp->next = newnode;
		tmp = newnode;
		i++;
	}

	newnode->next = 0;
	
	return (head);
}



singly_list_t *insert_node(singly_list_t *head)
{
	int choice;
	newnode = malloc(sizeof(struct singly_list));
	printf("Please press 1 to insert at beginning and 2 to insert at end\n");
	scanf("%d", &choice);
	if (choice == 1)
	{
		newnode->next = head;
		head = newnode;
	}

	else
	{
		tmp = head;
		while (tmp->next != 0)
		{
			tmp = tmp->next;
		}

		tmp->next = newnode;
		newnode->next = 0;
	}

	return (head);
}

singly_list_t *insert_values(singly_list_t *head)
{
	tmp = head;
	while (tmp != 0)
	{
		printf("Enter value: ");
		scanf("%d", &tmp->data);
		tmp = tmp->next;
	}
	printf("\n");

	return (head);
}

singly_list_t *print_list(singly_list_t *head)
{
	tmp = head;

	while (tmp != 0)
	{
		printf("%d "  "", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}


singly_list_t *del_node(singly_list_t *head)
{
	int choice;

	tmp = head;
	printf("Please enter 1 to delete first node or 2 to delete last node\n");
	scanf("%d", &choice);

	if (choice == 1)
		head = head->next;
	else
	{
		while (((tmp->next)->next) != 0)
			tmp = tmp->next;
		tmp->next = 0;
	}

	return (head);
}
		
