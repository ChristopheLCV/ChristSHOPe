#include "Computer.h"
#include <iostream>

using namespace std;

Computer::Computer(Brand *_brand, int _ram, float _scrnSize, bool _IsLapTop ):Product(_brand)
{
    //ctor
    //Product::Product(_brand);
    ram = _ram;
    scrnSize = _scrnSize;
    IsLapTop = _IsLapTop;

    cout << "Creating Computer. Id = " << id << endl;
}

Computer::~Computer()
{
    //dtor
}

void Computer::update ( void )
{

}

void Computer::turnOnOff ( void )
{
    cout << "Turning Computer on/off" << endl;
}
