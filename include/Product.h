#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include "Brand.h"

using namespace std;

class Product
{
    public:
        //
        int id;
        int siz;
        int price;
        string model;
        Brand *brand;


        Product(Brand *_brand);
        virtual ~Product();

        virtual void turnOnOff ( void ) = 0;

    protected:
        static int refId;
    private:
};

#endif // PRODUCT_H
