#include "Car.h"

#include <iostream>
#include <string>
#include <fstream>

void Car::setCar(std::string _brand, std::string _carMark, int _dateOfRelease) {
    brand = _brand;
    carMark = _carMark;
    dateOfRelease = _dateOfRelease;

}
std::string Car::toString() {
    return "brand: " + this->brand + ", carMark: " + this->carMark + ", date of release: " + std::to_string(this->dateOfRelease) + "\n";
}
