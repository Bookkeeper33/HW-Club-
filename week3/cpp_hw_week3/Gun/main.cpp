#include <iostream>
#include "Gun.h"

using namespace std;

int main() {
    Gun *pistol = new Gun("Glock", 20);

    pistol->prepare();
    pistol->reload();

    for ( int i = 0; i < 20; i++ ) {
        pistol->shoot();
    }

    pistol->reload();
    cout << *pistol << endl;
    
    delete pistol;

    return 0;
}