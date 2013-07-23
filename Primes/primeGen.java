import java.util.Scanner;

public class primeGen {

	// TODO need to get this up to 10 ^ 9
	private static int MAX = 10000; // 10 ^ 9

	public static void main(String[] args) {

		// Cache values
		boolean[] primes = getPrimes(MAX);

		Scanner scan = new Scanner(System.in);

		int t = Integer.parseInt(scan.nextLine());
		for (int i = 0; i < t; i++) {
			int m = scan.nextInt();
			int n = Integer.parseInt(scan.nextLine().trim());
			printPrimes(m, n, primes);
		}

	}

	private static void printPrimes(int m, int n, boolean[] primes) {
		for (int i = m; i <= n; i++) {
			if (primes[i]) {
				System.out.println(i);
			}
		}

		System.out.println();
	}

	private static boolean[] getPrimes(int n) {
		boolean[] primes = new boolean[n];

		// init to true
		for (int i = 0; i < primes.length; i++) {
			primes[i] = true;
		}

		primes[0] = false;
		primes[1] = false;

		for (int i = 2; i < n; i++) {
			if (primes[i]) {
				for (int j = i * i; j < Math.sqrt(n); j += i) {
					primes[j] = false;
				}
			}
		}

		return primes;
	}

}