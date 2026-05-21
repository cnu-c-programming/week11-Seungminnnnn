#include <stdio.h>

enum State { IDLE, RUNNING, PAUSED, DONE};

void print_state(enum State s) {
    switch (s)
    {
    case IDLE:
        printf("State: IDLE");
        break;
    case RUNNING:
        printf("State: RUNNING");
        break;
    case PAUSED:
        printf("State: PAUSED");
        break; 
    case DONE:
        printf("State: DONE");
        break; 
    }
}

int main(void) {
    print_state(RUNNING);
    return 0;
}
