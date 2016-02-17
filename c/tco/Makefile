# tail call test Makefile
# written by mwolf

ROOT=tco
SRC= $(ROOT:=.c)

OLVLS= O3 O2 O1 Os

OBJS= $(addsuffix _$(ROOT:=.o), $(OLVLS))
ASMS= $(addsuffix _$(ROOT:=.s), $(OLVLS))
EXECUTABLES=$(addsuffix _$(ROOT), $(OLVLS))

CC=gcc

INCLUDE= -I../include

WARNINGS= -Wall -Wextra -Wfloat-equal -Wundef -Wshadow -Wpointer-arith \
	-Wcast-align -Wstrict-overflow=5 -Wwrite-strings \
	-Waggregate-return -Wcast-qual -Wswitch-default -Wswitch-enum  \
	-Wconversion -Wunreachable-code -Wformat=2 -Winit-self \
	-Wuninitialized -Werror-implicit-function-declaration

SFLAGS= -S -pedantic $(WARNINGS)
CFLAGS= -g -pedantic $(WARNINGS)
LIBS=

.PHONY: all clean 

all: $(ASMS) $(EXECUTABLES)

%_$(ROOT): %_$(ROOT).o
	$(CC) $(LIBS) $(INCLUDE) $(CFLAGS) -$* $< -o $@

%_$(ROOT).s: $(SRC)
	$(CC) $(INCLUDE) $(SFLAGS) -$* $< -o $@

clean:
	rm -f *~
	rm -f *.o
	rm -f *.s
	rm -f $(EXECUTABLES)
