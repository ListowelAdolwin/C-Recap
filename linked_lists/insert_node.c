#include "linked_lists_header.h"


singly_list_t *insert_node(singly_list_t *head)
{
	singly_list_t *tmp, *newnode;
	tmp = head;
	int insert_at, pos;

	printf("1: Insert at beginning\n2: Insert at end\n3: Insert at position\n");
	scanf("%d", &insert_at);
	
	printf("*** INSERTING NODE ***\n");
	newnode = malloc(sizeof(singly_list_t));
	printf("Enter value to insert: ");
	scanf("%d", &newnode->data);

	if (insert_at == 1)
	{
		newnode->next = head;
		head = newnode;
	}

	else if (insert_at == 2)
	{
		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = newnode;
		newnode->next = NULL;
	}

	else
	{
		printf("Enter the position you want to insert node: ");
		scanf("%d", &pos);

		int i = 0;
		while (i < pos - 1)
		{	tmp = tmp->next;
			i++;
		}
	
		newnode->next = tmp->next;
		tmp->next = newnode;
	}

	return (head);
}
