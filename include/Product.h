#ifndef PRODUCT_H
#define PRODUCT_H


class Product
{
    public:
        //
        int id;
        int siz;
        string model;

        Product();
        virtual ~Product();

        void turnOnOff ( void );

    protected:

    private:
};

#endif // PRODUCT_H
