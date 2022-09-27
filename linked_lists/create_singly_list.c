#include <stdio.h>
#include <stdlib.h>
#include "linked_lists_header.h"

/*#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	int data;
	struct node *next;
}singly_list_t;
*/

singly_list_t *head, *tmp, *newnode;

singly_list_t *create_list();
void insert_values(singly_list_t *head);
void print_list(singly_list_t *head);
singly_list_t *insert_node(singly_list_t *head);
singly_list_t *delete_node(singly_list_t *head);
singly_list_t *reverse_list(singly_list_t *head);


int main(void)
{
	head = create_list();
	insert_values(head);
	print_list(head);
	head = insert_node(head);
	print_list(head);
	head = delete_node(head);
	print_list(head);
	head = reverse_list(head);
	print_list(head);

	return (0);
}

singly_list_t *create_list()
{
	int i, n;


	head = tmp = newnode = 0;
	printf("How many nodes do you need to create?: ");
	scanf("%d", &n);

	newnode = malloc(sizeof(singly_list_t));
	head = tmp = newnode;
	newnode->next = NULL;

	i = 0;
	while (i < n - 1)
	{	newnode = malloc(sizeof(singly_list_t));
		newnode->next = NULL;
		tmp->next = newnode;
		tmp = tmp->next;
		i++;
	}

	printf("*** LIST CREATED SUCCESSFULLY ***\n");
	return (head);
}


void insert_values(singly_list_t *head)
{
	tmp = head;

	printf("*** INSERTING VALUES ***\n");
	while(tmp != 0)
	{
		printf("Enter next value: ");
		scanf("%d", &tmp->data);
		tmp = tmp->next;
	}
}


void print_list(singly_list_t *head)
{
	tmp = head;
	
	printf("\n*** PRINTING LIST ***\n");
	while(tmp != 0)
	{
		printf("%d  ", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}
