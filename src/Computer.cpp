#include "Computer.h"
#include <iostream>

using namespace std;

Computer::Computer()
{
    //ctor
}
Computer::Computer(int _ram, float _scrnSize, bool _IsLapTop )
{
    //ctor
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
