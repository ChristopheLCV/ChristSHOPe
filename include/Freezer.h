#ifndef FREEZER_H
#define FREEZER_H

#include <Product.h>


class Freezer : public Product
{
    public:
        Freezer();
        virtual ~Freezer();

        void turnOnOff ( void );

    protected:

    private:
};

#endif // FREEZER_H
