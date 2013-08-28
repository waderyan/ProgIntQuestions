#include <math.h>
#include <stdio.h>

long fibBenet(int n) {
   double fi = (1 + sqrt(5)) / 2;
   return (pow(fi, n) - pow(-fi, -n)) / sqrt(5);
}

int fibDynamic(int n) {
   double fibs[n+1];
   int i;

   fibs[0] = 0;
   fibs[1] = 1;

   for (i=2; i <= n; i++) {
      fibs[i] = fibs[i-1] + fibs[i-2];
   }

   return fibs[n];
}


int fibRec(int n) {
   return (n < 2) ? n : fibRec(n-1) + fibRec(n-2);
}

int main() {
   int n = -1;

   while (n != 0) {
      printf("What fibonnaci number?");
      scanf("%d", &n);

      printf("Binet: %lu\n", fibBenet(n));
      printf("Dynamic: %d\n", fibDynamic(n));
      if (n < 10) {
         printf("Recursive: %d\n", fibRec(n));
      }
   }


   return 0;
}




