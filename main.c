#include "primes.h"
#include <stdio.h>
#ifndef TESTING
// rtdsc
#endif

int main(int argc,  char **argv) {
#ifndef TESTING
	// start timer
#endif
	for (int i = 0; i < (1 << 8); i++) {
#ifdef TESTING
		printf("%d:%s\n", i, is_prime(i) ? "True" : "False");
#else
		is_prime(i);
#endif
	}
#ifndef TESTING
	// stop timer
	// print timer
#endif
}
