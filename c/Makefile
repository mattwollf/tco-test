# tail call test Makefile
# written by mwolf

SRC= tco recurs iter
OUT_DIRS= o1 o2 o3 os

ASMS= $(SRC:=.s)

SRC_DIR= src

CC=gcc

INCLUDE= -I.  

WARNINGS= -Wall -Wextra -Wfloat-equal -Wundef -Wshadow -Wpointer-arith \
	-Wcast-align -Wstrict-overflow=5 -Wwrite-strings \
	-Waggregate-return -Wcast-qual -Wswitch-default -Wswitch-enum  \
	-Wconversion -Wunreachable-code -Wformat=2 -Winit-self \
	-Wuninitialized -Werror-implicit-function-declaration

SFLAGS= -S -pedantic $(WARNINGS)

LIBS=

.PHONY: all clean setup

all: setup $(ASMS)

setup:
	mkdir -p $(OUT_DIRS)

%.s: $(SRC_DIR)/%.c
	$(CC) $(INCLUDE) $(SFLAGS) -S $< -o o1/$@
	$(CC) $(INCLUDE) $(SFLAGS) -S $< -o o2/$@
	$(CC) $(INCLUDE) $(SFLAGS) -S $< -o o3/$@
	$(CC) $(INCLUDE) $(SFLAGS) -S $< -o os/$@

clean:
	rm -f *~
	rm -f $(ASMS)
	rm -rf $(OUT_DIRS)
