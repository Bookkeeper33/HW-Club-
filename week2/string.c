#include <stdio.h>

// int main() {
//     char name[10] = "yaroslav"; // в конце всегда есть нуль терминатор char name[10] = "yaroslav\0"
//     char str[10];

//     scanf("%9s", str);

//     printf("Hello %s!\n", name);

//     return 0;
// }
int main() {
    char buf[64];

    for ( int i = 0; i < 64; i++) {
        buf[i] = i;   //Заполним наш массив значениями для имитации наличия мусора
    }

    char* ptr = buf;

    for ( ; scanf("%c", ptr) == 1 ; ptr++);     //Пока функция scanf успешно считывает
                                                //и записывает в буфер 1 шаблон (%с) -
                                                //перемещаемся по нашему буферу
    *ptr = '\0';
    printf("buf: %s\n", buf);                   //Выводим содержимое буфера в формате %s

    return 0;
}