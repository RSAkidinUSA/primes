#include "primes.h"
#include <stdio.h>
#ifndef TESTING
#include <time.h>
#include <stdlib.h>
#endif

int main(int argc,  char **argv) {
#ifndef TESTING
	clock_t start, end;
	double time_used;
	time_t t;
	start = clock();
#endif
	for (int i = 0; i < (1 << NUM_BITS); i++) {
#ifdef TESTING
		printf("%d:%s\n", i, is_prime(i) ? "True" : "False");
#else
		is_prime(i);
#endif
	}
#ifndef TESTING
	end = clock();
	time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("0 - %d: %f\n", (1 << NUM_BITS), time_used);

	// Random number testing
	srand((unsigned) time(&t));
	start = clock();
#ifndef NUM_CYCLES
#define NUM_CYCLES (1 << NUM_BITS)
#endif
	for (int i = 0; i < NUM_CYCLES; i++) {
		is_prime(rand() % (1 << NUM_BITS));
	}
	end = clock();
	time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("%d random #s: %f\n", NUM_CYCLES, time_used);
#endif
}
