#include <stdlib.h>
#include <stdio.h>

static int my_strlen(const char s[]) {
	int len = 0;

	while (s[len] != '\0') {
		len++;
	}

	return len;
}


static int string_to_int(const char str[]) {
	int i = 0, result = 0, isNeg = 0;
	int length = my_strlen(str);

	if (length == 0) {
		return 0;
	}

	if (str[0] == '-') {
		isNeg = 1;
		i++;
	}

	for (; i < length; i++) {
		result = (result * 10) + (str[i] - '0');
	}

	if (isNeg) {
		result *= -1;
	}

	return result;
}

static const char * int_to_string(int number) {

}

int main() {

	printf("%d\n", string_to_int("123"));
	printf("%d\n", string_to_int("-123"));

	return 0;
}