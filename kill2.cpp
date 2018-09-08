#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    pid_t dpid = getpid();
    if (kill(dpid, SIGABRT) == -1) {
        fprintf(stderr, "Cannot send signal\n");
        return 1;
    }
    return 0;
}