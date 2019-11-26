#ifndef COMPUTER_H
#define COMPUTER_H

#include <Product.h>


class Computer : public Product
{
    using Product::Product;

    public:
        int ram;
        float scrnSize;
        bool IsLapTop;

        Computer(Brand *_brand, int _ram, float _scrnSize, bool _IsLapTop );
        virtual ~Computer();

        void turnOnOff ( void );

    protected:

    private:
        void update ( void );
};

#endif // COMPUTER_H
