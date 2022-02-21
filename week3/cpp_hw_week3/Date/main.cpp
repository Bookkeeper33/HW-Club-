#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    try {
        Date *date = new Date(31, 4, 2000);
        
        cout << "DAY  : " << date->getDay() << endl;
        cout << "MONTH: " << date->getMonth() << endl;
        cout << "YEAR : " << date->getYear() << endl;

        cout << *date << endl;
        delete date;
    } 
    catch (const InvalidDate& exception) {
        cout << "Invalid date" << endl;
    }

    return 0;
}