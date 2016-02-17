#Makefile.inc
#author mwolf

export
CC=gcc
RM= rm -f

CFLAGS= -g -pedantic $(WARNINGS)
SFLAGS= -S -pedantic $(WARNINGS)

OLVLS= O3 O2 O1 Os

INCLUDE= -I$(shell pwd)/include

WARNINGS= -Wall -Wextra -Wfloat-equal -Wundef -Wshadow -Wpointer-arith \
	-Wcast-align -Wstrict-overflow=5 -Wwrite-strings \
	-Waggregate-return -Wcast-qual -Wswitch-default -Wswitch-enum  \
	-Wconversion -Wunreachable-code -Wformat=2 -Winit-self \
	-Wuninitialized -Werror-implicit-function-declaration
