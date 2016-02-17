# tail call test Makefile
# written by mwolf

include Makefile.inc

.PHONY: all
all:
	cd iterative; make
	cd recursive; make
	cd tco; make

.PHONY: clean
clean:
	cd iterative; make clean
	cd recursive; make clean
	cd tco; make clean
