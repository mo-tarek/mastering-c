#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
typedef struct Node{
	int data; // Data part of the node
	struct Node *next; // Pointer to the next node
	struct Node *prev; // Pointer to the previous node
}Node;

// Function to create a new node
Node* createNode(int data){
	Node *newNode = (Node *)malloc(sizeof(Node));
	if(!newNode){
		fprintf(stderr, "Memory allocation failed\n");
		extit(EXIT_FAILURE);
	}
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

// Function to insert a node at the end of the list 
void insertEnd(Node **head, int data){
	Node *newNode = createNode(data);
	if(*head == NULL){
		*head = newNode;
		return;
	}

	Node *temp = *head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp; // Link the new node to the previous node
}

// Function to delete a node by value
void deleteNode(Node **head, int key){
	Node *temp = *head;

	// If the list is empty
	if(temp == NULL){
		printf("List is empty\n");
		return;
	}

	// If the head node holds the key
	if(temp != NULL && temp->data == key){
		*head = temp->next; // Change head
		if(*head != NULL){
			(*head)->prev = NULL; // Update previous of new head
		}
	}
	free(temp); // Free the old head
	return;

	
	// Search for the key to be deleted
	while(temp != NULL && temp->data != key){
		temp = temp->next;
	}

	// If the key was not found
	if(temp == NULL){
		printf("Key not found\n");
		return;
	}

	// Unlike the node from the linked list
	if(temp->next != NULL){
		temp->next->prev = temp->prev; // Link the next node's prev to the current node's prev
	}
	if(temp->prev != NULL){
		temp->prev->next = temp->next; // Link the previous node's next to the current node's next
	}
	free(temp); // Free the memory 
}


// Function to display the linked list in forward direction
void displayListForward(Node *node){
	while(node != NULL){
		printf("%d <-> ", node->data);
		node = node->next;
	}
	printf("NULL\n");
}

// Function to display the linked list in backward direction
void displayListBackward(Node *node){
	if(node == NULL) return; // If the list is empty
	
	// Go to the last node
	while(node->next != NULL){
		node = node->next;
	}

	// Print the list in reverse 
	while(node != NULL){
		printf("%d <-> ", node->data);
		node = node->prev;
	}
	printf("NULL\n");
}

// Function to free the entire list
void freeList(Node *node){
	Node *temp;
	while(node != NULL){
		temp = node;
		node = node->next;
		free(temp);
	}
}

// Main function to demonstrate the doubly linked list 
int main(){
	Node *head = NULL; // Start with an empty list 
	
	insertEnd(&head, 10);
	insertEnd(&head, 20);
	insertEnd(&head, 30);

	printf("Doubly Linked List (Forward): ");
	displayListForward(head);

	printf("Doubly Linked List (Backward): ");
	displayListBackward(head);

	printf("Doubly Linked List (Deleting 20...\n");
	deleteNode(&head, 20);

	printf("Doubly Linked List after deletion (Forward): ");
	displayListForward(head);
	
	freeList(head); // Free the allocated memory
	return 0;

}

