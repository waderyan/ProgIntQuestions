#include <iostream>

enum StackErrors ( EMPTY );

class StackException : public exception {

	virtual const char* message(StackErrors error) {
		if (StackErrors == EMPTY) {
			return "Empty stack!";
		}
		return "Some other error";
	}

};

class Stack {

public:
	Stack() : head(NULL) {};
	~Stack();
	void push (void *data);
	void *pop();

private:

	Element* head;

	class Element {
	public:
		Element(Element *n, void *d) : next(n), data (d) {}
		Element *getNext() const { return next; }
		void* value() const {return data; }
	private:
		Element *next;
		void *data;
	};
};

Stack::~Stack(){
	while (head) {
		Element* next = head->next;
		delete head;
		head = next;
	}
}

void Stack::push(void *data) {
	Element* elem = new Element(head, data);
	head = elem;
}

void* Stack::pop() {
	Element* toDelete = head;

	if (head == NULL) {
		throw StackError("empty");
	}

	head = head->next;
	void* res = toDelete->data;
	delete toDelete;
	return res;
}



int main() {

}