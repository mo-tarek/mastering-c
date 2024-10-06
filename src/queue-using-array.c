#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Maximum size of the queue

typedef struct Queue{
	int arr[MAX]; // Array to hold the queue elements
	int front; // Index of the front element 
	int rear; // Index of the rear element
}Queue;

// Function to initalize the queue
void initQueue(Queue *q){
	q->front = -1; // Queue is empty
	q->rear = -1;  // Queue is empty
}

// Function to check if the queue is full
int isFull(Queue *q){
	return (q->rear + 1) % MAX == q->front;
}

// Function to check if the queue is empty
int isEmpty(Queue *q){
	return q->front == -1;
}

// Function to enqueue an element
void enqueue(Queue *q, int value){
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
int dequeue(Queue *q){
	if(isEmpty(q)){
		printf("Queue underflow! Can't dequeue\n");
		return -1; // Return a sentinel value
	}
	int dequeuedValue = q->arr[q->front];
	if(q->front == q->rear){
		// Queue becomes empty after this dequeue
		q->front = -1;
		q->rear = -1;
	}else{
		// Circular increment
		q->front = (q->front + 1) % MAX;
	}
	return dequeuedValue; // Return the dequeued value
}

// Function to display the queue elements 
void display(Queue *q){
	if(isEmpty(q)){
		printf("Queue is empty\n");
		return;
	}
	printf("Queue element: ");
	for(int i = 0; i < (q->rear - q->front + MAX) % MAX + 1; i++){
		printf("%d ", q->arr[(q->front + i) % MAX]);
	}
	printf("\n");
}

// Main function to demonstrate the queue
int main(void){
	Queue q;
	initQueue(&q);

	enqueue(&q, 10);
	enqueue(&q, 20);
	enqueue(&q, 30);
	display(&q);

	printf("%d dequeued from queue\n", dequeue(&q));
	display(&q);

	return 0;
}
