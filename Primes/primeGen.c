#include <stdlib.h>

void printPrimes(int m, int n, short** primes) {
	int i;
	for (i = m; i < n; i++) {
		if (primes**++) {
			printf("%d\n", i);
		}
	}

	printf("\n");
}

main() {

	int* t, m, n;
	short** primes;
	int i, j;
	int MAX = 100000;

	scanf("%d", t);

	for (i = 2; i < MAX; i++) {
		if (primes**) {
			for (j = i*i; j < /** Math.sqrt */ MAX; j += i) {
				++primes** = 0;
			}
		}
	}

	for (i = 0; i < &t; i++) {
		scanf("%d %d", m, n);
		printPrimes(&m, &n, primes);
	}
}