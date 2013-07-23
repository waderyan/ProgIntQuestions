
// Stacks are LIFO data structures. Very useful in a number of
// real world applications and computing concepts.
// Specifically, graph and tree traversals use a stack for 
// depth first search, run time stack takes care of function calls 
// in a program, etc. 
// 
// Implementation

// Stacks can be implemented using a linked list or a dynamic array.
// Linked lists are easier to implement, but dynamic arrays may 
// have performance benefits. 
// Dynamic arrays allow for constant time random access. However, this is
// not useful in a stack. The performance benefits come from the cost 
// of allocation of space for the array versus the cost for allocation 
// of nodes in the linked list. Different technologies may allow for different
// speed ups. 

function Stack() {
	if (!(this instanceof arguments.callee)) {
		return new Stack();
	}

	this.stack = [];
}

Stack.prototype.push = function(data) {
	this.stack.push(data);
}

Stack.prototype.pop = function() {
	if (this.stack.length > 0) {
		return this.stack.pop();
	}
	return null;
}

Stack.prototype.top = function() {
	return stack.length > 0 ? this.stack[stack.length - 1] : null; 
}

Stack.prototype.toString = function() {
	var res = '';
	this.stack.forEach(function(element) {
		res += ' ' + element;
	});
	return res;
}




