all:
	verilator --cc --trace --exe --build -j 0 -Wall csrc/main.cpp vsrc/top.v


sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

include ../Makefile
