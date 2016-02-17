# tail call test Makefile
# written by mwolf

ROOT=recursive_fib
SRC= $(ROOT:=.c)

OBJS= $(addsuffix _$(ROOT:=.o), $(OLVLS))
ASMS= $(addsuffix _$(ROOT:=.s), $(OLVLS))
EXECUTABLES=$(addsuffix _$(ROOT), $(OLVLS))

.PHONY: all
all: $(ASMS) $(EXECUTABLES)

%_$(ROOT): %_$(ROOT).o
	$(CC) $(LIBS) $(INCLUDE) $(CFLAGS) -$* $< -o $@

%_$(ROOT).s: $(SRC)
	$(CC) $(INCLUDE) $(SFLAGS) -$* $< -o $@

.PHONY: clean
clean:
	rm -f *~
	rm -f *.o
	rm -f *.s
	rm -f $(EXECUTABLES)
