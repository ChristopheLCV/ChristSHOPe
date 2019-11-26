#include "Product.h"

int Product::refId = 0;

Product::Product()
{
    //ctor
    id = ++refId;
}

Product::~Product()
{
    //dtor
}
