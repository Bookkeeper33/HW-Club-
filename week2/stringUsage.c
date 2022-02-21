#include <stdio.h>

int strCmp(char str1[], char str2[]) {
    int i = 0;

    for ( ; str1[i] != '\0'; i++ ) {
        if ( str1[i] != str2[i] ) {
            return 0;
        }
    }

    if ( str2[i] != '\0' ) {
        return 0;
    }
    return 1;
}

int strCmpPointer(char str1[], char str2[]) {
    for ( ; *str1 != '\0'; str1++, str2++ ) {
        if ( *str1 != *str2 ) {
            return 0;
        }
    }

    if ( *str2 != '\0' ) {
        return 0;
    }
    return 1;
}

void strCopy(char source[], char destination[]) {
    int i = 0;

    for ( ; source[i] != '\0'; i++ ) {
        destination[i] = source[i];
    }
    destination[i] = '\0';

}

void strCopyPointer(char source[], char destination[]) {
    for ( ; *source != '\0'; source++, destination++ ) {
       *destination = *source;
    }
    *destination = '\0';
}




int main() {
    char str1[10];
    char str2[10];

    scanf("%9s", str1);

    strCopy(str1; str2);

    if ( strCmpPointer(str1, str2) ) {
        printf("%s is copy of %s\n", str1, str2 );
    }


    return 0;
}