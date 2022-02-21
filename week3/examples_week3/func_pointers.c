#include <stdio.h>

void fooA(int num) {
    printf("fooA: %d\n", num + 1);
}

int sum(int a, int b) {
    return a + b;
}

void fooB(int num) {
    printf("fooB: %d\n", num + 2);
}

void fooC(int num) {
    printf("fooC: %d\n", num + 3);
}

void handler(void(*ptrFunc)(int), int param) {
    ptrFunc(param);
}

int main() {
    ////////////////
    void(*functions[])(int) = { &fooA, &fooB, &fooC };

    // второй вариант
    // functions[0] = &fooA;
    // functions[1] = &fooB;
    // functions[2] = &fooC;

    for ( int i = 0; i < 3; i++ ) {
        handler(functions[i], i);
    }

    ////////////////
    int num = 42;

    int* ptrNum;
    ptrNum = &num;

    /////////////////
    void(*ptrFunc)();
    ptrFunc = &fooA;

    //////////////////
    int(*ptrSum)(int, int) = &sum;

    printf("sum: %d\n", ptrSum(2, 2));



    return 0;
}
