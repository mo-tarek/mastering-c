#include <stdio.h>
#include <stdlib.h>

// Define a structure for a priority queue
typedef struct PriorityQueue{
	int *arr; // Array to hold the elements 
	int size; // Current number of elements
	int capacity; // Maximum number of elements
}PriorityQueue;

// Function to create a priority queue
PriorityQueue* createPriorityQueue(int capacity){
	PriorityQueue *pq = (PriorityQueue *)malloc(sizeof(PriorityQueue));
	pq->capacity = capacity;
	pq->size = 0;
	pq->arr = (int *)malloc(capacity * sizeof(int));
	return pq;
}

// Function to swap two elements in the array
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Function to get the parent index
int parent(int i){
	return (i - 1) / 2;
}

// Function to get the left child index
int leftChild(int i){
	return (2 * i) + 1;
}

// Function to get the right child index
int rightChild(int i){
	return (2 * i) + 2;
}

// Function to insert an element into the priority queue
void insert(PriorityQueue *pq, int value){
	if(pq->size == pq->capacity){
		printf("Priority queue overflow! Can't insert %d\n", value);
		return;
	}
	pq->arr[pq->size] = value; // Add the new element at the end
	pq->size++; // Increase the size
		   
	// Heapify up
	int i = pq->size - 1;
	while(i != 0 && pq->arr[parent(i)] < pq->arr[i]){
		swap(&pq->arr[i], &pq->arr[parent(i)]);
		i = parent(i);
	}
}

// Function to remove the highest priority element 
int extractMax(PriorityQueue *pq){
	if(pq->size <= 0){
		printf("Priority queue underflow! Can't extract max\n");
		return -1; // Return a sentinel value
	}
	if(pq->size <= 1){
		pq->size--;
		return pq->arr[0]; // Return the only element
	}

	// Store the maximum value
	int root = pq->arr[0];
	pq->arr[0] = pq->arr[pq->size - 1]; // Move the last element to the rt
	pq->size--; // Decrease the size
	// Heapify down
	int i = 0;
	while(leftChild(i) < pq->size){
		int largest = i;
		int left = leftChild(i);
		int right = righChild(i);

		if(left < pq->size && pq->arr[left] > pq->arr[largest])
			largest = left;
		if(right < pq->size && pq->arr[right] > pq->arr[largest])
			largest = right;
		if(largest == 1)
			break;

		swap(&pq->arr[i], &pq->arr[largest]);
		i = largest;
	}
	return root; // Return the maxinum value
}

// Function to display the priority queue elements 
void display(PriorityQueue *pq){
	if(pq->size == 0){
		printf("Priority queue is empty\n");
		return;
	}
	printf("Priority Queue elements: ");
	for(int i = 0; i < pq->size; i++){
		printf("%d ", pq->arr[i]);
	}
	printf("\n");
}

// Function to free the memory allocated for the priority queue
void freePriorityQueue(PriorityQueue *pq){
	free(pq->arr);
	free(pq);
}


// Main function to demonstrate the priority queue
int main(void){
	PriorityQueue(PriorityQueue *pq);

	insert(pq, 30);
	insert(pq, 30);
	insert(pq, 30);
	insert(pq, 30);
	insert(pq, 30);

	display(pq);

	printf("Extracted max: %d\n", extractMax(pq));
	display(pq);

	freePriorityQueue(pq); // Free the allocated memory
	return 0;
}
