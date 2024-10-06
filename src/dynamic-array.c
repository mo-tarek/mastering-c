#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int *data; // Pointer to the array of integers
	size_t size; // Current number of elements 
	size_t capacity; // Maximum capacity of the array
}DynamicArray;

// Function to intialize a dynamic array
DynamicArray* createArray(size_t intialCapacity){
	DynamicArray *array = (DynamicArray *)malloc(sizeof(DynamicArray));
	array->data = (int *)malloc(initalCapcity * sizeof(int));
	array->size = 0;
	array->capacity = intialCapacity;
	return array;
}

// Function to append an element to the dynamic array
void append(Dynamic *array, int value){
	if(array->size >= array->capacity){
		// Double the capacity if size exceeds capacity
		array->capacity *= 2;
		array->data = (int *)realloc(array->data, array->capacity * sizeof(int));
	}
	array->data[array->size++] = value;
}

// Function to retrieve an element at a given index
int get(DynamicArray *array, size_t index){
	if(index < array->size){
		return array->data[index];
	}
	fprintf(stderr, "Index out of bounds\n");
	exit(EXIT_FAILURE);
}

// Function to free the dynamic array
void freeArray(DynamicArray *array){
	free(array->data);
	free(array);
}

// Main function to demonstrate the dynamic array
int main(){
	DynamicArray *array = createArray(2); // Intial capacity of 2
	
	append(array, 10);
	append(array, 20);
	append(array, 30); // This will triger a resize
	
	for(size_t i = 0; i < array->size; i++){
		printf("%d ", get(array, i));
	}
	printf("\n");

	freeArray(array); // Freeing the allocated memory
	return 0;
}
