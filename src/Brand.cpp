#include "Brand.h"
#include <iostream>
using namespace std;

int Brand::BrandId=1234567;

Brand::Brand ( string _name, string _logo)
{
    //ctor
    name = _name;
    logo = _logo;
    id = ++BrandId;
    cout << "Creating Brand ID = " << id << endl;
}

Brand::~Brand()
{
    //dtor
}
