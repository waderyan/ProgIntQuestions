#include <stdlib.h>

int my_strlen(const char* str) {
	int i = 0;

	while (*(str + i) != '\0') {
		i++;
	}

	return i;
}

int my_atoi(const char* str) {
	int i;
	int length = my_strlen(str);
	int result = 0;

	for (i = 0; i < length && (*(s + i) >= '0') && (*(s + i) <= '9'); i++) {
		result = (result * 10) + (*(s + i) - '0');
	}

	return result;
}

int my_lower(int c) {
	return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}

int my_isdigit(int c) {
	return c >= '0' && c <= '9';
}

const char * my_toLower(const char* str) {
	int i, length = my_strlen(str);
	char * result = malloc(sizeof(str))

	// TODO
	for (i = 0; i < length; i++) {

	}
}

int main() {
	return 0;
}