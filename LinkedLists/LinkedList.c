#include<stdio.h>

struct node {
	int data;
	struct node *next;
};

void assert(int condition) {
	if(condition) {
		printf("Successful!\n");
	} else {
		printf("Failure!\n");
	}
}

int countWhile(struct node* head, int key) {
	struct node* current = head;
	int count = 0;

	while (current != NULL) {
		if (current->data == key) {
			count++;
		}
		current = current->next;
	}

	return count;
}

int countFor(struct node* head, int key) {
	struct node* current;
	int count = 0;

	for (current = head; current != NULL; current = current->next) {
		if(current->data == key)
			count++;
	}

	return count;
}

int countRec(struct node* head, int key) {
	if (head == NULL) {
		return 0;
	}

	if (head->data == key) {
		return 1 + countRec(head->next, key);
	} else {
		return countRec(head->next, key);
	}
}

struct node* buildOneTwoThree() {
	struct node* first = malloc(sizeof (*first));
	struct node* second = malloc(sizeof (*second));
	struct node* third = malloc(sizeof (*third));

	*first = (struct node) {1, second };
	*second = (struct node) {2, third };
	*third = (struct node) {3, NULL };

	return first;
}

void deleteOneTwoThree(struct node* head) {
	free (head->next->next);
	free (head->next);
	free (head);
}

int countTest() {
	struct node* head = buildOneTwoThree();

	assert(countWhile(head, 1) == 1);
	assert(countFor(head, 1) == 1);
	assert(countRec(head, 1) == 1);

	deleteOneTwoThree(head);
}

int getNth(struct node* head, int index) {
	struct node* current = head;
	int count = 0;

	while (current != NULL) {
		if (count == index) {
			return current->data;
		}

		current = current->next;
		count++;
	}

	return -1;
}

int getNthRec(struct node* head, int index, int count) {
	if (head == NULL) {
		return -1;
	}

	if (count == index) {
		return head->data;
	} 

	return getNthRec(head->next, index, count++);
}

int getNthFor(struct node* head, int index) {
	int count = 0;
	struct node* current;

	for (current = head; current != NULL; current = current->next) {
		if (count == index) {
			return current->data;
		}
		count++;
	}

	return -1;
}

int getNthRecStart(struct node* head, int index) {
	return getNthRec(head, index, 0);
}

int getNthTest() {

	struct node* head = buildOneTwoThree();

	assert(getNth(head, 0) == 1);
	assert(getNth(head, 1) == 2);
	assert(getNth(head, 2) == 3);
	assert(getNth(head, 3) == -1);

	assert(getNthFor(head, 0) == 1);
	assert(getNthFor(head, 1) == 2);
	assert(getNthFor(head, 2) == 3);

	assert(getNthRecStart(head, 0) == 1);
	assert(getNthRecStart(head, 1) == 2);
	assert(getNthRecStart(head, 2) == 3);

	deleteOneTwoThree(head);
}

int delete(struct node** head, struct node* deleteMe) {

	struct node *elem;

	if (!head || !*head || !deleteMe) { // Checks for null pointers
		return 0;
	}

	elem = *head;
	if (deleteMe == elem) {
		*head = elem->next;
		free(deleteMe);
		return 1;
	}


	while ( elem ) {
		if (elem->next == deleteMe) {
			elem->next == deleteMe->next;
			free(deleteMe);
			return 1;
		}
		elem = elem->next;
	}

	return 0;
}

void deleteList(struct node** head) {

	struct node *deleteMe = *head;
	struct node* next = NULL;

	while (deleteMe) {
		next = deleteMe->next;
		free(deleteMe);
		deleteMe = next;
	}

	*head = NULL;
}

main()  {	
	//countTest();
	//getNthTest();


}
