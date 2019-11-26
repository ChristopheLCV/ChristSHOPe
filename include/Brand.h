#ifndef BRAND_H
#define BRAND_H
#include <iostream>
using namespace std;

class Brand
{
    public:
        int id;
        string name;
        string logo;

        Brand(string _name, string _logo);
        virtual ~Brand();

    protected:

    private:
        static int BrandId;
};

#endif // BRAND_H
