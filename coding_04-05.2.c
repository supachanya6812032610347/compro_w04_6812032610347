#include <stdio.h>

void countCall() {
    int counter = 0;                // Non-static: re-initialized every call
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();                    // First call
    countCall();                    // Second call
    printf("After first call.\n");
    return 0;
}
