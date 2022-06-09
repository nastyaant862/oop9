#include "oop9 nasled.h"
#include <iostream>
using namespace std;

int main()
{
    Property* properties[7] = {};
    properties[0] = new Apartment (10000);
    properties[1] = new Apartment (25100);
    properties[2] = new Apartment (25000);
    properties[3] = new Car (5000);
    properties[4] = new Car (1450);
    properties[5] = new CountryHouse (45600);
    properties[6] = new CountryHouse (13900);

    for (int i = 0; i < 7; i++) {
        cout << properties[i]->nalog() << endl;
    }

    for (int i = 0; i < 7; i++) {
        delete properties[i];
    }
}
