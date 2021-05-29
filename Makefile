.PHONY: all

TARGETS := fast fast-test small small-test
NUM_CYCLES = 10000

time: fast small
test: fast-test small-test
all: $(TARGETS)

%: %.c main.c
	$(CC) -o $@ $? -DNUM_CYCLES=$(NUM_CYCLES)

%-test: %.c main.c
	$(CC) -o $@ $? -DTESTING

clean:
	rm -f $(TARGETS)
