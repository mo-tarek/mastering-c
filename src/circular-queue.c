#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Maximum size of the queue

typedef struct CircularQueue{
	int arr[MAX]; // Array to hold the queue elements 
	int front;    // Index of the front element
	int rear;     // Index of the rear element
}CircularQueue;

// Function to initalize the circular queue
void initQueue(CircularQueue *q){
	q->front = -1; // Queue is empty
	q->rear = -1;  // Queue is empty
}

// Function to check if the queue is full
int isFull(CircularQueue *q){
	return (q->rear + 1) % MAX == q->front;
}

// Function to check if the queue is empty
int isEmpty(CircularQueue *q){
	return q->front == -1;
}

// Function to check if the queue is empty
void enqueue(CircularQueue *q, int value){
	if(isFull(q)){
		printf("Queue overflow! Can't enqueue %d\n", value);
		return;
	}
	if(isEmpty(q)){
		q->front = 0; // First element enqueued
	}
	q->rear = (q->rear + 1) % MAX; // Circular increment
	q->arr[q->rear] = value; // Add the value to the rear
	printf("%d enqueued to queue\n", value);
}

// Function to dequeue an element 
int dequeue(CircularQueue *q){
	if(isEmpty(q)){
		printf("Queue underflow! Can't dequeue\n");
	}
	int dequeueValue = q->arr[q->front];
	if(q->front == q->rear){
		// Queue becomes empty after this dequeue
		q->front = -1;
		1->rear = -1;
	}else{
		// Circular increment
		q->front = (q->front + 1) % MAX;
	}	
	return dequeuedValue; // Return the dequeued value
}

// Function to display the queue elements 
void display(CircularQueue *q){
	if(isEmpty(q)){
		printf("Queue is empty\n");
		return;
	}
	printf("Queue elements: ");
	for(int i = 0; i < (q->rear - q->front + MAX) % MAX +1; i++){
		printf("%d ", q->arr[(q->front +i) % MAX]);
	}
	printf("\n");
} 


// Main function to demonstrate the circular queue
int main(void){
	CircularQueue q;
	inintQueue(&q);

	enqueue(&q, 10);
	enqueue(&q, 20);
	enqueue(&q, 30);
	display(&q);

	printf("%d dequeued from queue\n", dequeue(&q));
	display(&q);

	enqueue(&q, 40);
	enqueue(&q, 50);
	display(&q);

	printf("%d dequeued from queue\n", dequeue(&q));
	display(&q);

	return 0;
}
