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
    Brand SmallSoft ("Small Soft", "Small Soft is bigger than Micro Soft !!");
    Brand JeanPhillips ("Jean-Phillips", "Hip Hip Hip Jean Phillips !!");
    Computer cp1 ( &SmallSoft, 1234, 17, true );
    Freezer fz1 ( &SmallSoft );
    Computer cp2 ( &JeanPhillips, 4321, 12, false );
    Freezer fz2 ( &JeanPhillips );

    cp1.price = 480;
    cp1.model = "ASUS ROG 17 inch";
    displayProduct ( cp1 );
    return 0;
}
