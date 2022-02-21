#include <iostream>
#include "list.h"

using namespace std;

int main() {
    List *list = new List(10, 1.5);
    List *list2 = new List(2, 1.5);

    for ( int i = 0; i < 20; i++ ) {
        list->push_back(i);
    }

    list->erase(19);
    list->insert(1488, 5); // глянуть insert ошибку выдает
    
    cout << *list << endl;

    delete list;
    delete list2;

    return 0;
}