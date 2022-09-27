#include "linked_lists_header.h"


singly_list_t *tmp;


singly_list_t *delete_node(singly_list_t *head)
{
	int delete_at = 1;
	tmp = head;


	printf("1: Delete from beginning\n2: Delete from end\n3: Delete from position\n");
	scanf("%d", &delete_at);
	
	printf("*** DELETING NODE ***\n");

	if (delete_at == 1)
	{
		head = head->next;
		free(tmp);
	}

	else if (delete_at == 2)
	{
		while (((tmp->next)->next) != 0)
			tmp = tmp->next;
		//free(tmp->next);
		tmp->next = NULL;
	}

	else 
	{
		int i, del_pos;
		


		printf("Enter position to delete: ");
		scanf("%d", &del_pos);

		i = 0;
		while (i < del_pos - 2)
		{
			tmp = tmp->next;
			i++;
		}
		tmp->next = tmp->next->next;
	}
	
	return (head);
}

