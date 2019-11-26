#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>

class Product
{
    public:
        //
        int id;
        int siz;
        int price;
        std::string model;

        Product();
        virtual ~Product();

        virtual void turnOnOff ( void ) = 0;

    protected:
        static int refId;
    private:
};

#endif // PRODUCT_H
