#include <iostream>
#include "car.h"
#include "Rectangle.h"
#include "Student.h"
#include <memory>
using namespace std;

int main() {
    Car objectCar;

    objectCar.setBrand("Volkswagen");
    objectCar.setModel("Golf");
    objectCar.setYearModel(2014);
    objectCar.printData();

    Rectangle* objectRectangle = new Rectangle();

    objectRectangle->setWidth(6);
    objectRectangle->setHeight(4);
cout << endl << "-----------------------------------" << endl << endl;
    cout << "Suorakulmion tiedot" << endl;
    cout << "Suorakulmion pinta-ala: " << objectRectangle->getArea() << endl;
    cout << "Suorakulmion ymparysmitta: " << objectRectangle->getCircum() << endl;

    delete objectRectangle;

    unique_ptr<Student> objectStudent = make_unique<Student>();

    objectStudent->setName("Harry Potter");
    objectStudent->setStudentNumber(7711);
    objectStudent->setAverage(4.0);

    cout << endl << "-----------------------------------" << endl << endl;
    cout << "Opiskelijan tiedot" << endl;
    cout << "Nimi: " << objectStudent->getName() << endl;
    cout << "Opiskelijanumero: " << objectStudent->getStudentNumber() << endl;
    cout << "Keskiarvo: " << objectStudent->getAverage() << endl;
    return 0;
}
