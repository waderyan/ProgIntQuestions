#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Define boolean type
typedef int bool;
#define true 1
#define false 0

// Calculates the length of a string
const size_t mystrlen(const char * str) {
	size_t len = 0;
	while (*str != '\0') {
		str++;
		len++;
	}

	return len;
}

//Removes rem characters from str and returns str
const char * myremove(char* str, const char* rem) {
	const unsigned int ASCII_SIZE = 128;
	bool toRemove[ASCII_SIZE] = { false };
	size_t src = 0, dst = 0;
	const size_t strLen = mystrlen(str);
	const size_t remLen = mystrlen(rem);

	for (; src < strLen; src++) {
		toRemove[*(rem + src)] = true;
	}

	for (src = 0; src < remLen; src++) {
		if (!toRemove[*(str + src)]) {
			str[dst++] = str[src];
		}
	}

	return str;
}

// Displays the success or failure of the condition
void assert(size_t condition) {
	const char * res = (condition ? "Successs!" : "Failure!");
	printf("%s\n", res);
}

int main() {

	// TODO some sort of Bus error is going on here
	// Output => Bus Error: 10

	// Remove one character
	assert(strcmp("abc" , "bc") == 0);
	// Remove more than one character
	assert(strcmp(myremove("bob", "b") , "o") == 0);
	// Remove characters in various places
	assert(strcmp(myremove("telephone", "tpe") , "lhon") == 0);
	// Remove no characters
	assert(strcmp(myremove("human", "z") , "human") == 0);
	// Remove string is larger than string to be modified
	assert(strcmp(myremove("z", "abcdefghijklmn") , "z") == 0);
	// Remove no characters
	assert(strcmp(myremove("a", "bc") , "a") == 0);
	// Remove all characters
	assert(strcmp(myremove("abc", "abc") , "") == 0);
	// Non alpha-numeric characters
	assert(strcmp(myremove("?d*09$$", "19828*?") , "d0$$") == 0);

	return 0;
}