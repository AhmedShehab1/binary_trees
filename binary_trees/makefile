# Define phony targets
.PHONY: all clean

CC := gcc

SRCS := $(wildcard *.c)
LINKERFLAG = -S
BINS := $(SRCS:%.c=%.i)

# all call values in ${BINS} as individual targets
all : $(BINS)

%.i : %.c
	$(CC) -E -P $< -o $@

clean:
	@echo "Cleaning up..."
	rm -rvf *.i
