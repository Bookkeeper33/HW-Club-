#include <stdio.h>

// int main() {
//     FILE *source = fopen("task.in", "r");
//     int value;
//     int result;

//     for ( ; ; ) {
//         result = fscanf(source, "%d", &value);
//         if ( result == -1 || result == 0 ) {
//             break;
//         }
//         printf("%d\n", value);
//     }

//     return 0;
// }

// int main() {
//     FILE *in = fopen("task.in", "r");
//     int x,y, z;
//     int result;

//     result = fscanf(in, "%d %d %d", &x, &y, &z);

//     printf("%d\n", result);

//     return 0;
// }

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int value;

    for ( ; fscanf(in, "%d", &value) != EOF ; ) {
        fprintf(out,"%d\n", value);
    }

    fclose(in);
    fclose(out);// закрывать файлы объязательно

    return 0;
}