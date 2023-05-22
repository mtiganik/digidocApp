#pragma once
#include <iostream>


class Car {
    void setCar(std::string _brand, std::string _carMark, int _dateOfRelease);
public:
    Car(std::string _brand, std::string _carMark, int _dateOfRelease) {
        setCar(_brand, _carMark, _dateOfRelease);
    };
    std::string brand;
    std::string carMark;
    int dateOfRelease;
    std::string toString();
};
