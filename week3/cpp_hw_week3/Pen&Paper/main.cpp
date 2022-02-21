#include <iostream>
#include <string>
#include "Paper.h"
#include "Pen.h"

using namespace std;

int main() {
    Paper *paper = new Paper(60);
    Pen *pen = new Pen(-5);
    string str1 = "Hello World!";
    string str2 = " what's up my bro?";
    string str3 = " Trying my best at programming. Dunno what are you doing bro? ";

    try {
        pen->refill();
        pen->write(*paper, str1);
        cout << "Ink amount: " << pen->getInkAmount() << endl;
        pen->write(*paper, str2);
        cout << "Ink amount: " << pen->getInkAmount() << endl;
        pen->write(*paper, str3);
        pen->write(*paper, str3);
        pen->write(*paper, str3);
        paper->show();
    }
    catch (OutOfInk& exc)  {
        cout << "Out of Ink" << endl;
        // cout << "Ink amount: " << pen->getInkAmount() << endl;
        // pen->refill();
        // pen->write(*paper, str3);
        paper->show();
    }
    catch (OutOfSpace& exc) {
        cout << "No more space on paper!" << endl;
    }

    cout << "len of Paper: " << paper->getSymbols() << endl;

    delete paper;
    delete pen;

    return 0;
}