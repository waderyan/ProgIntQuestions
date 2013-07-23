
"""
	Stack - LIFO. 
	Very useful data structure in a variety 
	of algorithms and computing tasks.
	Implemented with dynamically resizing array 
	or linked list. 
	O(1) operations: push, pop, top. 
"""
class Stack:
		
		def __init__(self) :
			self.items = []

		def push(self, item) :
			self.items.append(item)

		def pop(self) :
			return self.items.pop();

		def isEmpty(self) :
			return (self.items == [])




