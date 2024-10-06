#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node 
typedef struct Node{
	int data; // Data part of the node
	struct Node *next; // Pointer to the next node
}Node;

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

// Function to insert a node at the end of the circular linked list 
void insertEnd(Node **head, int data){
	Node *newNode = createNode(data);

	if(*head == NULL){
		*head = newNode;
		newNode->next = *head; // Point to the new node to itself
	}else{
		Node *temp = *head;
		while(temp->next != *head){
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next = *head; // Make the new node to point to the head
	}
}

// Function to delete a node by value 
void deleteNode(Node **head, int key){
	if(*head == NULL){
		printf("List is empty\n");
		return;
	}

	Node *temp = *head, *prev = NULL;

	// If the node to be deleted is the head
	if(temp->data == key){
		// If there's only one node
		if(temp->next == *head){
			free(temp);
			*head = NULL; // List becomes empty
			return;
		}

		// otherwise, find the last node
		while(temp->next != *head){
			temp = temp->next;
		}
		temp->next = (*head)->next; // Link last node to the second node
		free(*head); // Free the old head
		*head = temp->next; // Update head
		return;
	}

	// Search for the node to be deleted 
	prev = *head;
	temp = (*head)->next;

	while(temp != *head && temp->data != key){
		prev = temp;
		temp = temp->next;
	}

	// If the key was not found
	if(temp == *head){
		printf("Key not found\n");
		return;
	}

	// Unlink the node from the circular linked list
	prev->next = temp->next;
	free(temp); // Free the memory 
}

// Function to display the circular linked list
void displayList(Node *head){
	if(head == NULL){
		printf("List is empty\n");
		return;
	}

	Node *temp = head;
	do{
		printf("%d -> ", temp->data);
		temp = temp->next;
	}while(temp != head);
	printf("(back to head: %d)\n");
}

// Function to free the entire circular linked list
void freeList(Node *head){
	if(head == NULL) return;

	Node *temp = head;
	Node *nextNode;

	do{
		nextNode = temp->next;
		free(temp);
		temp = nextNode;
	}while(temp != head);
}

// Main function to demonstrate the circular linked list
int main(){
	Node *head = NULL; // Start with an empty list
	
	insertEnd(&head, 10);
	insertEnd(&head, 20);
	insertEnd(&head, 30);

	printf("Circular Linked List: ");
	displayList(head);

	printf("Deleting 20...\n");
	deleteNode(&head, 20);

	printf("Circular Linked List after deletion: ");
	displayList(head);

	freeList(head); // Free the allocated memory
	return 0;
}
