#include <iostream>
#include "Unit.h"

using namespace std;

int main() {
    try {
        Unit *knight = new Unit("Knight", 5, -15);
        Unit *vampire = new Unit("Vampire", 1, 8);

        // cout << *knight<< endl;
        // cout << *vampire << endl;

        knight->attack(*vampire);
        // vampire->addHitPoints(19);
        cout << knight->getName() << endl;
        cout << knight->getHitPoints() << endl;
        cout << "==============" << endl;
        cout << vampire->getName() << endl;
        cout << vampire->getHitPoints() << endl;
        cout << "==============" << endl;

        // vampire->attack(*knight);
        // cout << knight->getName() << endl;
        // cout << knight->getHitPoints() << endl;

        // cout << "==============" << endl;
        // cout << vampire->getName() << endl;
        // cout << vampire->getHitPoints() << endl;
        
        // cout << "==============" << endl;

        knight->attack(*vampire);
        // cout << knight->getName() << endl;
        // cout << knight->getHitPoints() << endl;
        // cout << "==============" << endl;
        // cout << vampire->getName() << endl;
        // cout << vampire->getHitPoints() << endl;
        // cout << "==============" << endl;

        // knight->addHitPoints(30);
        // vampire->attack(*knight);

        // cout << "==============" << endl;
        // cout << knight->getName() << endl;
        // cout << knight->getHitPoints() << endl;

        // cout << "==============" << endl;
        // cout << vampire->getName() << endl;
        // cout << vampire->getHitPoints() << endl;
        delete knight;
        delete vampire;   
        
    }
    catch (UnitIsDead& exception) {
        cout << "Unit is dead" << endl;
    }
    return 0;
}