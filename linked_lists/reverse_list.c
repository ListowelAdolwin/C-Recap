#include "linked_lists_header.h"


singly_list_t *reverse_list(singly_list_t *head)
{
	singly_list_t *prevnode, *currentnode, *nextnode;
	prevnode = 0;
	currentnode = nextnode = head;

	printf("*** REVERSING LIST ***");
	while(nextnode->next != 0)
	{
		nextnode = nextnode->next;
		currentnode->next = prevnode;
		prevnode = currentnode;
		currentnode = nextnode;
	}
	
	nextnode->next = prevnode;
	head = nextnode;

	return (head);
}
