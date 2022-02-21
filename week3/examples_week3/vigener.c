#include <stdio.h>

#define SIZE 101
#define ALPHA 26

int VigenereB(int pos, int basis, int posVig) {
    int key = posVig - basis;

    if ( basis == 'A') {
        key = posVig - (basis + 32);
    }
    pos = (((pos-basis) + key) % ALPHA) + basis;
    return pos;
}

void Vigenere(char transformedKey[], char str[], char crypted[]){
    for ( int i = 0; str[i] != '\0'; i++ ) {
        if ( 'a' <= str[i] && str[i] <= 'z' ) {
            crypted[i] = VigenereB(str[i],'a', transformedKey[i]);
        } else if ( 'A' <= str[i] && str[i] <= 'Z' ) {
            crypted[i] = VigenereB(str[i], 'A', transformedKey[i]);
        } else {
            crypted[i] = str[i];
        }
    }
}

void transformKey(char transformedKey[], char key[], char plainStr[], int lenKey) {
    for ( int i = 0, j = 0; plainStr[i] != '\0'; i++ ) {
        if ( j >=  lenKey ) {
            j = 0;
        }
        if ( plainStr[i] >= 'a' && plainStr[i] <= 'z' ) {
            transformedKey[i] = key[j];
            j += 1;
        } else if ( plainStr[i] >= 'A' && plainStr[i] <= 'Z' ) {
            transformedKey[i] = key[j];
            j += 1;
        } else {
            transformedKey[i] = plainStr[i];
        }
    }
}

int main() {
    char plainText[] = "Attack DowN!";
    char key[] = "sslpesc";
    char str[SIZE];
    char crypted[SIZE];
    int keyLen = 0;

    for ( ; key[keyLen] != '\0'; keyLen++  );

    transformKey(str, key, plainText, keyLen);

    Vigenere(str, plainText, crypted);

    printf("%s\n", crypted);

    return 0;
}
