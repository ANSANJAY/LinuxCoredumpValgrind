Dumping core from outside the program
=========================================

One possibility is with gdb, if available. This will let the program running:

(gdb) attach <pid>
(gdb) generate-core-file <optional-filename>
(gdb) detach

Another possibility is to signal the process. This will terminate it, assuming the signal is not caught by a custom signal handler:

kill -s SIGABRT <pid>

Dumping core from within the program
=====================================

void dump_core_and_terminate(void)
{
    /*
     * Alternative:
     *   char *p = NULL; *p = 0;
     */
    abort();
}
