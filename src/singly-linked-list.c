#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
typedef struct Node{
	int data; // Stores integer data of the node
	struct Node *next; // Pointer to the next node
} Node;

// Function to create a new node
Node* createNode(int data){
	Node *newNode = (Node *)malloc(sizeof(Node));
	if(!newNode){
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

// Function to insert a node at the end of the list 
void insertEnd(Node **head, int data){
	Node *newNode = creatNode(data);
	if(*head == NULL){
		*head = newNode;
		return;
	}

	Node *temp = *head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}

// Function to delete a node by value
void deleteNode(Node **head, int key){
	Node *temp = *head, *prev = NULL;

	// If the head node itself holds the key
	if(temp != NULL && temp->data == key){
		*head = temp->next; // Changed head
		free(temp); // Free old head
		return;
	}

	// Search for the key to be deleted
	while(temp != NULL && temp->data != key){
		prev = temp;
		temp = temp->next;
	}

	// If the key was not present in the list
	if(temp == NULL){
		printf("Key not found\n");
		return;
	}

	// Unlike the node from the linked list
	prev->next = temp->next;
	free(temp); // Free the memory
}

// Function to display the linked list
void freeList(Node *node){
	Node *temp;
	while(node != NULL){
		temp = node;
		node = node->next;
		free(temp);
	}
}

// Main function to demonstrate the linked list
int main(void){
	Node *head = NULL; // start with an empty list
	
	insertEnd(&head, 10);
	insertEnd(&head, 20);
	insertEnd(&head, 30);

	printf("Linked List: ");
	displayList(head);

	printf(head);
	deleteNode(&head, 20);

	printf("Deleting 20...\n");
	deleteNode(&head, 20);

	printf("Linked List after deletion: ");
	displayList(head);

	freeList(head); // Free the allocated memory
	return 0;
}
