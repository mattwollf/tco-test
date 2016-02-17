# tail call test Makefile
# written by mwolf

include Makefile.inc

SUBDIRS= iterative recursive tco recursive_fib iterative_fib tco_fib

.PHONY: all
all: $(SUBDIRS)

.PHONY: $(SUBDIRS)
$(SUBDIRS):
	make -C $@

.PHONY: clean
clean:
	for dir in $(SUBDIRS) ; do \
		make -C $$dir clean ; \
	done
