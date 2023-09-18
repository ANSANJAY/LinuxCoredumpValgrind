About Valgrind:
===================

1. Debugging Tool
2.It is a wrapper around various tools for debugging and profiling.
	Best tool out of these is MemCheck that is used to find out memory leaks etc.

In order to use valgrind you have to include debugging information that is you should compile the application with -g option if you are using gcc .

$ gcc -o 1 1.c -g

$ valgrind --tool=memcheck --leak-check=yes  ./1

Pros
==========

Catches common memory bugs (UB) on dynamically allocated memory regions
	Using Uninitialized Variables
	Out-of-bounds memory access(read/write underflow/overflow bugs)
	Use-after-free/use after return(out of scope) bugs
	Double free
	Leakage

Cons
==========

Performance: target software may run up to 10 to 30 times slower when run under Valgrind.

Memory footprint: each allocation within the target program requires Valgrind to make a memory allocation as well (making running Valgrind on highly-resource-constrained embedded Linux systems difficult).

In order to see the call stack with line-number information, a recompile/build with the -g flag is required.
