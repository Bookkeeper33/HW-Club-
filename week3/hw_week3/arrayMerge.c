#include <stdio.h>

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int i = 0;
    int j = 0;
    int targetIndex = 0;
    
    for ( ; i < len1 && j < len2; targetIndex++ ) {
        if ( src1[i] <= src2[j] ) {
            target[targetIndex] = src1[i];
            i += 1;
        } else {
            target[targetIndex] = src2[j];
            j += 1;
        }
    }
    
    for ( ; i < len1; i++, targetIndex++ ) {
        target[targetIndex] = src1[i];
    }
    
    for ( ; j < len2; j++, targetIndex++ ) {
        target[targetIndex] = src2[j];
    }
}


void print(int arr[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[last]);
}

int main() {
    int arr[] = { 1, 5, 8, 8 };
    int arr2[] = { 2, 4, 5, 8, 10};
    int len1 = sizeof(arr) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(int);
    int len3 = len1 + len2;
    int target[len3];

    arrayMerge(target, arr, len1, arr2, len2);
    print(target, len3);

    return 0;
}