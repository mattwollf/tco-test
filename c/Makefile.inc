#Makefile.inc
#author mwolf

export
CC=gcc
RM= rm -f
STD=-std=c11

CFLAGS= -g $(STD) -pedantic $(WARNINGS) -march=native 
SFLAGS= -S $(STD) -pedantic $(WARNINGS) -march=native

OLVLS= O3 O2 O1 Os

INCLUDE= -I$(shell pwd)/include

WARNINGS= -Wall -Wextra -Wfloat-equal -Wundef -Wshadow -Wpointer-arith \
	-Wcast-align -Wwrite-strings -Waggregate-return -Wcast-qual \
	-Wswitch-default -Wswitch-enum -Wconversion -Wunreachable-code \
	-Wformat=2 -Winit-self 	-Wuninitialized \
	-Werror-implicit-function-declaration
