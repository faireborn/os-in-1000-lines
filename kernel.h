#define PROCS_MAX 8

#define PROC_UNUSED 0
#define PROC_RUNNABLE 1

#include "common.h"

struct sbiret
{
        long error;
        long value;
};

struct process
{
        int pid;
        int state;
        vaddr_t sp;
        uint8_t stack[8192];
};
