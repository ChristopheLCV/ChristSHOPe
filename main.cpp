#include <iostream>
#include "Computer.h"
#include "Freezer.h"

using namespace std;

void  displayProduct ( Product &p )
{
    cout << "Product = " << p.model << endl;

}

int main()
{
    Computer cp1 ( 1234, 17, true );
    Freezer fz1;
    Computer cp2 ( 4321, 12, false );
    Freezer fz2;

    cp1.price = 480;
    cp1.model = "ASUS ROG 17 inch";
    displayProduct ( cp1 );
    return 0;
}
