#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *	main - program entry point
 *	Return: 0
 */

int main(void) {
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  int last = n % 10;

  if (last > 5) {
    printf("Last digit of: %d is %d and is greater than 5\n", last, n);
  } else if (last < 6 && !0) {
    printf("Last digit of: %d is %d\n", n, last);
  }
  if (last == 0) {
    printf("Last digit of: %d is 0\n", n);
  }

  return (0);
}
