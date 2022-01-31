#include <stdio.h>

int main() {
    int plain1, encrypted1;
    int plain2, encrypted2;
    int length, sequence;
    int decryption, keyA, keyB;
    
    scanf("%d %d %d %d %d", &plain1, &encrypted1, &plain2, &encrypted2, &length);
    
    keyA = (encrypted1 - encrypted2) / (plain1 - plain2);
    keyB = encrypted2 - plain2 * keyA;
    
    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &sequence);
        decryption = (sequence - keyB) / keyA;
        printf("%d ", decryption);
    }
    scanf("%d", &sequence);
    decryption = (sequence - keyB) / keyA;
    printf("%d\n", decryption);
    
    return 0;
}
