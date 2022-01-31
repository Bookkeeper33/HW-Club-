#include <stdio.h>

// struct - составной тип данных, пользовательский тип данных
//
typedef struct {
    int x;
    int y;
} Point;

struct Human {
    char name[10]; // все переменные в структуре это свойства
    int age;
    char gender;
    Point location;
};

void describe(struct Human human) {
    printf("%s\n", human.name);
    printf("%d\n", human.age);
    printf("%c\n", human.gender);
}

void strCpy(char source[], char destination) {
    for ( ; *source != '\0'; source++, destination++) {
        *destination = *source;
    }
    *destination = '\0';
}

void changeName(struct Human human, char newName[]) {
    strCpy(human.name);
}


int main() {
    struct Human yaroslav = {"yaroslav", 23, 'm'};
    struct Human jane = {"jane", 25, 'f'};

    describe(john);
    describe(jane);



    return 0;
}