#include "Product.h"

int Product::refId = 0;

Product::Product(Brand *_brand)
{
    //ctor
    id = ++refId;
    brand = _brand;
    cout << "Creating product, brand = " << brand->name << endl;
}

Product::~Product()
{
    //dtor
}
