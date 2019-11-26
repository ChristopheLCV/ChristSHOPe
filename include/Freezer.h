#ifndef FREEZER_H
#define FREEZER_H

#include <Product.h>


class Freezer : public Product
{
    using Product::Product;

    public:
        virtual ~Freezer();

        void turnOnOff ( void );

    protected:

    private:
};

#endif // FREEZER_H
