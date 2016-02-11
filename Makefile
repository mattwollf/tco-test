# tail call test Makefile
# written by mwolf

SRC= tco recurs iter

OBJS= $(SRC:=.o)
ASMS= $(SRC:=.s)

SRC_DIR= src
OUT_DIRS= o1 o2 o3 os

CC=gcc

INCLUDE= -I.  
EXECUTABLE=

WARNINGS= -Wall -Wextra -Wfloat-equal -Wundef -Wshadow -Wpointer-arith \
	-Wcast-align -Wstrict-overflow=5 -Wwrite-strings \
	-Waggregate-return -Wcast-qual -Wswitch-default -Wswitch-enum  \
	-Wconversion -Wunreachable-code -Wformat=2 -Winit-self \
	-Wuninitialized -Werror-implicit-function-declaration


CFLAGS= -c -pedantic $(WARNINGS)
SFLAGS= -S -pedantic $(WARNINGS)

LIBS=

all: setup 
all: o1
all: o2
all: o3

setup: 
	mkdir -p $(OUT_DIRS)

o1: SFLAGS+= -O1
o1: OUT_DIR=o1
o1: $(ASMS)

o2: SFLAGS+= -O2
o2: OUT_DIR=o2
o2: $(ASMS)

o3: SFLATS+= -O3
o3: OUT_DIR=o3
o3: $(ASMS)

os: SFLAGS+= -Os
os: OUT_DIR=os
os: $(ASMS)

%.o: $(SRC_DIR)/%.c
	$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $@

%.s: $(SRC_DIR)/%.c
	$(CC) $(INCLUDE) $(SFLAGS) -S $< -o $(OUT_DIR)/$@

clean:
	rm -f *~
	rm -f $(ASMS)
	rm -f $(OBJS)
	rm -rf $(OUT_DIRS)
