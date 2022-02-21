#include <stdio.h>

#define MAX_PRICE 1001

void arrayZeroFill(unsigned long long array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    int priceIndex;
    unsigned long long farmerQuantity;
    unsigned long long amount;
    unsigned long long totalAmount = 0;
    unsigned long long minPrice = 0;
    unsigned long long amountNeeded;
    unsigned long long milkPrices[MAX_PRICE];
    
    fscanf(in, "%llu %llu", &farmerQuantity, &amountNeeded);
    arrayZeroFill(milkPrices, MAX_PRICE);

    for ( int i = 0; i < farmerQuantity; i++ ) {
        fscanf(in, "%llu %d", &amount, &priceIndex);

        milkPrices[priceIndex] += amount;
        totalAmount += amount; 
    }
    fclose(in);

    if ( totalAmount >= amountNeeded ) {
        for ( int i = 0; i < MAX_PRICE; i++ ) {
            if ( milkPrices[i] != 0 ) {
                if ( amountNeeded > milkPrices[i] ) {
                    amountNeeded -= milkPrices[i];
                    minPrice += milkPrices[i] * i;
                } else {
                    minPrice += amountNeeded * i;
                    amountNeeded = 0;
                }
            }
        }
    }
    fprintf(out, "%llu\n", minPrice);
    fclose(out);

    return 0;
}
