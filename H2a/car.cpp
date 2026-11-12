#include "car.h"
using namespace std;
Car::Car() {}

void Car::printData()
{
    std::cout << "Auton merkki: " << brand << endl;
    std::cout << "Auton malli: " << model << endl;
    std::cout << "Valmistusvuosi: " << yearModel << endl;
}

void Car::setBrand(string b)
{
    brand = b;
}

void Car::setModel(string m)
{
    model = m;
}

void Car::setYearModel(int y)
{
    yearModel = y;
}
