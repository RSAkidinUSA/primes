#include "primes.h"

bool is_prime(int num) {
	if (num < 2)
		return false;
	else if (num > 2 && num % 2 == 0)
		return false;
	else if (num > 3 && num % 3 == 0)
		return false;
	else if (num > 5 && num % 5 == 0)
		return false;
	else if (num > 7 && num % 7 == 0)
		return false;
	else if (num > 11 && num % 11 == 0)
		return false;
	else if (num > 13 && num % 13 == 0)
		return false;
	else 
		return true;
}
