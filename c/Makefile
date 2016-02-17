# tail call test Makefile
# written by mwolf

include Makefile.inc

SUBDIRS= iterative recursive tco recursive_fib iterative_fib tco_fib

.PHONY: all
all:
	for dir in $(SUBDIRS) ; do \
		cd $$dir ; make ; cd .. ; \
	done

.PHONY: clean
clean:
	for dir in $(SUBDIRS) ; do \
		cd $$dir ; make clean ; cd .. ; \
	done
