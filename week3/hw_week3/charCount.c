#include <stdio.h>

#define DIFF 32
#define ALPHA 26

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int chars[ALPHA];
    char symbol;
    int charIndex;
    
    for ( int i = 0; i < ALPHA; i++ ) {
        chars[i] = 0;
    }
    
    for ( ; fscanf(in, "%c", &symbol) == 1; ) {
        for ( int i = 'a'; i <= 'z'; i++ ) {
            if ( symbol == i ) {
                charIndex = symbol - 'a';
                chars[charIndex] += 1;
            } else if ( symbol == i - DIFF ) {
                charIndex = symbol - 'A';
                chars[charIndex] += 1;
            }
        }
    }
    fclose(in);
    
    for ( int i = 0; i < ALPHA; i++ ) {
        if ( chars[i] > 0 ) {
            charIndex = i + 'a';
            fprintf(out, "%c %d\n", charIndex, chars[i]);
        }
    }
    fclose(out);
    
    return 0;
}
