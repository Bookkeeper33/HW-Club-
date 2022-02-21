#include <stdio.h>
#include <stdlib.h>

void triggerMemoryLeak(int* number) {
    int* initParam = (int*)malloc(sizeof(int));

    if ( initParam == NULL ) {
        printf("ptr is NULL\n");
        return;
    }
    *number = *initParam;
    // free(initParam);
}


int main() {
    //stack
    int stackA = 42;
    int* ptrStackA = &stackA;

    // heap
    int* ptrHeap = (int*)malloc(sizeof(int));
    if ( ptrHeap == NULL ) {
        //NULL = 0, принято использовать с указателями
        printf("ptr is NULL\n");

        return 0;
    }

    *ptrHeap = 42;

    printf("ptrStack %llu\n", ptrStackA);
    printf("ptrHeap %llu\n", ptrHeap);

    printf("*ptrStack %d\n", *ptrStackA);
    printf("*ptrHeap %d\n", *ptrHeap);

    free(ptrHeap);


    // memory leak
    int testNum;

    triggerMemoryLeak(&testNum);
    printf("testNum: %d\n", testNum);

    return 0;
}
