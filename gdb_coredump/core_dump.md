Core Dump
====================

A “core dump” is a snapshot of memory at the instant the program crashed, typically saved in a file called “core”.

The core contains the memory contents of the process at the point of the seg-fault including its 
	code segment, 
	data segment, 
	stack segment and 
	heap segment

Uses of Core Dump Files
==========================

-->	Core dumps allow a user to save a crash for later or off-site analysis, or comparison with other crashes.

-->	For embedded computers, it may be impractical to support debugging on the computer itself, so analysis of a dump may take place on a different computer.

Resource Limits
===================

Every process has various limits associated with it.

$ man setrlimit

Bash offers a built-in ulimit through which we can edit these.

Core-file max-size (ulimit -c/RLIMIT_CORE) controls the maximum core file size that can be generated when the process snaps.

$ ulimit -c unlimited

Where is my core?
===================

The core is dumped in the current working directory of the process.


What do do with a core file
============================

Core files can be examined with gdb, the GNU debugger.

It can read the crash informations, and display (among other things) the backtrace that leads to the crash.

$ gdb /path/to/binary /path/to/core/file

After gdb finished to read the input and shows its prompt, execute:

(gdb) backtrace

or 

(gdb) bt

GDB will then output the backtrace.



