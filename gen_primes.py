#!/usr/bin/python
import sys

primes = [2, 3, 5, 7, 11, 13, 17, 19,
		  23, 29, 31, 37, 41, 43, 47,
		  53, 59, 61, 67, 71, 73, 79,
		  83, 89, 97, 101, 103, 107,
		  109, 113, 127, 131, 137, 139,
		  149, 151, 157, 163 ,167, 173,
		  179, 181, 191, 193, 197, 199,
		  211, 223, 227, 229, 233, 239,
		  241, 251, 257, 263, 269, 271,
		  277, 281, 283, 293]


def print_byte_array():
	tmp = []
	for i in range(0, 256):
		if i % 8 == 0:
			tmp.append('')
		if i in primes:
			tmp[-1] += '1'
		else:
			tmp[-1] += '0'
	print("uint8_t primes[] = {")
	for b in range(0, len(tmp)):
		print("0b%s," % (tmp[b][::-1], ))
	print("};")


def print_true_false():
	for i in range(0, 256):
		if i in primes:
			print("%d:True" % (i, ))
		else:
			print("%d:False" % (i, ))


def print_usage():
	print("Usage %s [--byte/--true-false]" % (sys.argv[0]))
	exit(1)
	

if __name__ == '__main__':
	if len(sys.argv) != 2:
		print_usage()
	if sys.argv[1] == '--byte':
		print_byte_array()
		exit(0)
	elif sys.argv[1] == '--true-false':
		print_true_false()
		exit(0)
	else:
		print_usage()
