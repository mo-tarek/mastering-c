#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TABLE_SIZE 10 // Size of the hash table
		     

// Define the structure for a linked list node
typedef struct Node{
	char *key;
	int value;
	struct Node *next; // Pointer to the next node in the chain
}Node;

// Define the hash table structure
typedef struct HashTable{
	Node **table; // Array of pointers to linked lists
}HashTable;


// Hash function to calculate the hash index
unsigned int hash(const char *key){
	unsigned int hashValue = 0;
	while(*key){
		hashValue = (hashValue << 5) + *key++; // hashValue * 31 + char
	}
	return hashValue % TABLE_SIZE;
}

// Function to create a new hash table
HashTable* createHashTable(){
	HashTable *ht = (HashTable *)malloc(sizeof(HashTable));
	ht->table = (Node**)malloc(TABLE_SIZE * sizeof(Node *));
	for(int i = 0; i < TABLE_SIZE; i++){
		ht->table[i] = NULL; // Intialize all entries to NULL
	}
	return ht;
}

// Function to create a new linked list node
Node* createNode(const char *key, int value){
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->key = strdup(key); // Duplicate the string for the key
	newNode->next = NULL; 
	return newNode;
}

// Function to insert a key-value pair into the hash table
void insert(HashTable *ht, const char *key, int value){
	unsigned int index = hash(key);
	Node *newNode = createNode(key, value);

	// Check for an exisiting node with the same key
	Node *current = ht->table[index];
	Node *prev = NULL; 
	while(current != NULL){
		if(strcmp(current->key, key) == 0){
			current->value = value; // Update value if key alread exist
			free(newNode->key);
			free(newNode);
			return;
		}
		prev = current;
		current = current-> next;
	}

	// Insert the new node at the beginning of the linked list
	if(prev == NULL){
		ht->table[index] = newNode;
	}else{
		prev->next = newNode;
	}
}

// Function to search for a key in the hash table
int search(HashTable *ht, const char *key){
	unsigned int index = hash(key);
	Node *current = ht->table[index];
	while(current != NULL){
		if(strcmp(current->key, key) == 0){
			return current->value; // Return the value if key is found
		}
		current = current->next;
	}
	return -1; // Return -1 if the key is not found
}

// Function to delete a key-value pair from the hash table
void delete(HashTable *ht, const char *key){
	unsigned int index = hash(key);
	Node *prev = NULL;

	while(current != NULL){
		if(strcmp(current->key, key) == 0){
			if(prev == NULL){
				ht->table[index] = current->next; // Remove the node from the list
			}else{
				prev->next = current->next; // Bypass the current node
			}
			free(current->key);
			free(current);
			return;
		}
	}
}

// Function to free the hash table
void freeHashTable(HashTable *ht){
	for(int i = 0; i < TABLE_SIZE; i++){
		Node *current = ht->table[i];
		while(current != NULL){
			Node *temp = current;
			current = current->next;
			free(temp->key);
			free(temp);
		}
	}
	free(ht->table);
	free(ht);
}


// Main function to demonstrate the hash table
int main(void){
	HashTable *ht = createHashTable();

	insert(ht, "apple", 1);
	insert(ht, "banana", 2);
	insert(ht, "orange", 3);

	printf("Value for 'apple': %d\n", search(ht, "apple")); // output: 1
	printf("Value for 'banana': %d\n", search(ht, "banana")); // output: 1
	printf("Value for 'apple': %d\n", search(ht, "grapes")); // output: -1

	delete(ht, "banana");
	printf("Value for 'banana' after deletion: %d\n", search(ht, "banana")); // output: -1

	freeHashTable(ht); // Free the allocated memory
	return 0;
}
