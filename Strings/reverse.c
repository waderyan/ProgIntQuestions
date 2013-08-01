#include <stdio.h>
#include <string.h>

void reverse_str(char * frontPtr) {
	char * backPtr = frontPtr + strlen(frontPtr) - 1;
	char tmp;

	if (!frontPtr) {
		return;
	}

	while (frontPtr < backPtr) {
		tmp = *frontPtr;
		*frontPtr = *backPtr;
		*backPtr = tmp;
		frontPtr++;
		backPtr--;
	}
}

int main(int argc, char **argv) {
	
	char * word = argv[1];

	reverse_str(word);
	printf("%s\n", word);

	return 0;
}