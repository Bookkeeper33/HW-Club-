#include <stdio.h>

typedef struct {
    char model[10];
    int fuel;
    int location[2];
} Car;


void moveCar(Car *yourCar, int move) {
    if ( yourCar->fuel > 0 ) {
        yourCar->location[0] += move;
        yourCar->location[1] += move;
        yourCar->fuel -= 10;
    } else {
        printf("Fill your car tank\n");
    }
}

void fillCarTank(Car *yourCar, int fuel) {
    yourCar->fuel += fuel;
}

int checkCrash(Car yourCar, Car otherCar) {
    return yourCar.location[0] == otherCar.location[0] && yourCar.location[1] == otherCar.location[1];
}

int main() {
    Car mazda = {"mazda", 12, 25, 30};
    Car bmw = {"BMW", 0, 20, 25};
    Car audi = {"Audi", 0, 105, 43};
    Car siat = {"Siat", 10, 15, 73};


    printf("%s\n",mazda.model);
    printf("Current fuel is %d\n", mazda.fuel);
    printf("Current location (%d, %d)\n", mazda.location[0], mazda.location[1]);
    printf("----------------------------\n");
    printf("Current fuel of %s is %d\n", bmw.model, bmw.fuel);
    moveCar(&bmw, 20);
    printf("Current location (%d, %d)\n", bmw.location[0], bmw.location[1]);
    fillCarTank(&bmw, 50);
    printf("Current fuel of %s is %d\n", bmw.model, bmw.fuel);
    moveCar(&bmw, 5);
    printf("Current location (%d, %d)\n", bmw.location[0], bmw.location[1]);
    printf("Current fuel of %s is %d\n", bmw.model, bmw.fuel);
    printf("----------------------------\n");

    if ( checkCrash(bmw, mazda) ) {
        printf("%s crashed %s :(\n", bmw.model, mazda.model);
    }

    return 0;
}