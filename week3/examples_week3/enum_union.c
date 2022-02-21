#include <stdio.h>

#define SIZE 4

typedef enum {
    PASSPORT = 42,
    SALARY   = 12,
    POSITION = 23,

    ERROR    = -1
} Request;

typedef enum {
    CTRL    = 1 << 0,
    ALT     = 1 << 1,
    SHIFT   = 1 << 2
} KeyMods;

typedef union {
    int number;
    char arr[SIZE];
} UnionTest;


typedef struct {
    int number;
    char arr[SIZE];
    double num;
} StructTest;

int main() {

    printf("size of enum:  %llu", sizeof(KeyMods));
    printf("size of union:  %llu", sizeof(KeyMods));
    printf("size of struct:  %llu", sizeof(KeyMods));

    UnionTest uni;

    uni.num = 42.42;

    printf("uni.num: %g\n", uni.num);
    printf("uni.number: %d\n", uni.num);

    // KeyMods key;

    // scanf("%d", &key);

    // if ( key & ALT) {
    //     printf("Alt is pressed\n");
    // }

    // if ( key == (ALT | CTRL)) {
    //     printf("ALT+CTRL is pressed\n");
    // }

    // if ( key ) {
    //     printf("Charlie\n");
    // }


    // Request req;

    // scanf("%d", &req);

    // if ( req == PASSPORT ) {
    //     printf("Alpha\n");
    // }

    // if ( req == SALARY ) {
    //     printf("Bravo\n");
    // }

    // if ( req == POSITION ) {
    //     printf("Charlie\n");
    // }

    // printf("%llu\n", sizeof(Request));

    return 0;
}
