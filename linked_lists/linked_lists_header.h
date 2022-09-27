#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * struct list - a node structure
 * @next - the next node
 * @prev - the previous node
 * @data - the data part
 */

typedef struct list
{
        struct list *next;
        struct list *prev;
        int data;
} list_t;


typedef struct singly_list 
{ 
        int data; 
        struct singly_list *next; 
} singly_list_t; 
