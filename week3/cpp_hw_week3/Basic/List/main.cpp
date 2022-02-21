#include <iostream>
#include <string>
#include "List.h"

using namespace std;

int main() {
    List *list = new List(10, 1.5);
    List *list2 = new List(2, 1.5);

    for ( int i = 0; i < 20; i++ ) {
        list->push_back(i);
    }
    
    // if ( *list == *list2 ) {
    //     std::cout << "Lists are equal!" << std::endl;
    // } else {
    //     std::cout << "Not equal!" << std::endl;
    // }
    
    // for ( int i = 0, j = 50; i < 15; i++ , j-- ) {
    //     int digit = rand() % j + 1;
    //     list->insert(digit, i);
    // }
    
    // cout << *list << endl;
    // cout << *list2 << endl;


    // list->sort();
    // list2->sort();

    list->insert(5, 18);
    list2->insert(10, 5);
    list->insert(666, 0);
    list->insert(1488, 22);

    list->erase(1);
    list->erase(20);
    // list2->erase(-1);
    // list2->erase(4);

    // int pop = list->pop_back();
    // cout << "Pop back: " << pop << endl;
    cout << "Find index of 30: " << list->find(30) << endl;
    cout << "Size         : " << list->size() << endl;
    cout << "MaxSize      : " << list->max_size() << endl;
    cout << "Size list2   : " << list2->size() << endl;
    cout << "MaxSize list2: " << list2->max_size() << endl;
    cout << "Operator [5]: " << (*list)[4] << endl;
    cout << "===============" << endl;

    cout << *list << endl;
    // cout << *list2 << endl;

    delete list;
    delete list2;

    return 0;
}