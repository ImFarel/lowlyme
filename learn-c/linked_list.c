#include<stdio.h>
#include <stdlib.h>

typedef struct node
{
	int val;
	struct node* next;
} node_t;
void print_list(node_t* head);
void push_end(node_t* head, int val);

int main() {
	node_t* head = NULL;
	head = (node_t*)malloc(sizeof(node_t));

	if (head == NULL)
	{
		return 1;
	}

	head->val = 1;
	head->next = (node_t*)malloc(sizeof(node_t));

	head->next->val = 2;
	head->next->next = (node_t*)malloc(sizeof(node_t));

	head->next->next->val = 3;
	head->next->next->next = NULL;

	print_list(head);
	push_start(&head, 4);

	return 0;
}

/**
 * Inserts a new node with the given value at the start of the linked list.
 *
 * @param head - A pointer to the head of the linked list.
 * @param val - The value to be inserted.
 */
void push_start(node_t** head, int val) {
	// create new head
	node_t* new_head;
	new_head = (node_t*)malloc(sizeof(node_t));

	// set the new value
	new_head->val = val;
	// set the next as the pointer of head
	new_head->next = *head;
	// replace the head with the new value
	*head = new_head;
}

/**
 * Inserts a new node with the given value at the end of the linked list.
 *
 * @param head The head of the linked list.
 * @param val The value to be inserted.
 */
void push_end(node_t* head, int val) {
	node_t* curr = head;
	while (curr->next == NULL) {
		curr = curr->next;
	}

	// Allocate new memory for the pushed value
	curr->next = (node_t*)malloc(sizeof(node_t));
	curr->next->val = val;
	curr->next->next = NULL;
}

void print_list(node_t* head) {
	node_t* curr = head;
	while (curr != NULL) {
		printf("%d\n", curr->val);
		curr = curr->next;
	}
}