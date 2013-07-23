#include <stdlib.h>
#include <stdio.h>


typedef struct Element {
	struct Element* next;
	void* data;
} Element;

Element* init() {
	Element* stack = malloc(sizeof(Element));
	return stack;
}

void push(Element* stack, void* data) {
	Element* newEle = malloc(sizeof(Element));
	newEle->data = data;
	newEle->next = stack;
	stack = newEle;
}

void* pop(Element* stack) {
	void* res = stack->data;
	Element* toDelete = stack;
	stack = stack->next;
	free(toDelete);
}

void* top(Element* stack) {
	return stack->data;
}

void print(Element* stack) {
	Element* printer = stack;
	while (printer != NULL) {
		printf("%d", printer->data);
		printer = printer->next;
	}
}

void stackTest() {
	Element* stack = init();
	push(stack, 1);
	push(stack, 2);
	push(stack, 3);
	print(stack);
	int* res = pop(stack);
	printf("%d", *res);
	res = pop(stack);
	printf("%d", *res);
}


main() {
	stackTest();
}