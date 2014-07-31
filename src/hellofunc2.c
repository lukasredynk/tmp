#include <stdio.h>
#include <tmpsample.h>

int computeFibonacci(int step) {
    if (step < 1)
        return;

    int result;

    switch (step) {
        case 1: 
        case 2:
            result = 1;
            break;
        default:
            result = computeFibonacci(step - 1) + 
                computeFibonacci(step - 2);
    }

    return result;
}

            

void printTmpSample2(void) {

    int i;

    for (i = 1; i < 10; i++) {
        printf("%d ", computeFibonacci(i));
    }
    
    printf("\n");

  return;
}
