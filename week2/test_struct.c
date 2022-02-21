#include <stdio.h>

typedef struct {
    int x,y;
} Point;


typedef struct {
    char name[10];
    int age;
    Point location; // вложенная в Animal структура
} Animal;

void initAnimal(Animal *animal) {
    scanf("%9s %d", animal->name, &(animal->age));
    scanf("%d %d", &(animal->location.x), &(animal->location.y));
}

void printAnimal(Animal *animal) {
    printf("%s is %d years old\n", animal->name, animal->age);

    //обратите внимание, что доступ к полям вложенной структуры через точку
    printf("located at (%d, %d)\n", animal->location.x, animal->location.y);
}

void moveAnimal(Animal *animal, Point location) {
    animal->location.x = location.x;
    animal->location.y = location.y;
}

int isEqualPoint(Point a, Point b) {
    return a.x == b.x && a.y == b.y;
}

int main() {
    Animal hamster;
    Animal snake;

    initAnimal(&hamster);
    initAnimal(&snake);

    printf("---------------------------\n");
    printAnimal(&hamster);
    printAnimal(&snake);

    moveAnimal(&snake, hamster.location);

    printf("---------------------------\n");

    printAnimal(&hamster);
    printAnimal(&snake);

    printf("---------------------------\n");
    if ( isEqualPoint(snake.location, hamster.location) ) {
        printf("hamster %s is dead, ", hamster.name);
        printf("snake %s is happy\n", snake.name);
    }


    return 0;
}