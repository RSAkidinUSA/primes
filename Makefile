.PHONY: all

TARGETS := fast fast-test small small-test

all: $(TARGETS)

fast: fast.c
	$(CC) -o $@ $? main.c

fast-test: fast.c
	$(CC) -o $@ $? main.c -DTESTING

small: small.c
	$(CC) -o $@ $? main.c

small-test: small.c
	$(CC) -o $@ $? main.c -DTESTING

clean:
	rm -f $(TARGETS)
