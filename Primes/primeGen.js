
function getAllPrimes(m, n) {
	var primes = [],
		i,
		j,
		isPrime;

	m = m || 0;

	primes.push(2);

	for (i = 3; i < n; i++) {
		isPrime = true;
		for (j = 0; j < primes.length; j++) {
			if (i % primes[j] == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			primes.push(i);
		}
	}

	primes.forEach(function(prime) {
		if (prime > m) {
			console.log(prime);
		}
	});
}
