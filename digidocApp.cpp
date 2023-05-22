// digidocApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include "include//functions01.h"
#include "include/Car.h"
#include "MathLibrary.h"

#include "Exports.h"
//#include "Container.h"
using namespace std;

int main()
{

    //cout << DIGIDOCPP_WARNING_DISABLE_CLANG("Hello");
    // Initialize a Fibonacci relation sequence.
    fibonacci_init(1, 1);
    // Write out the sequence values until overflow.
    do {
        std::cout << fibonacci_index() << ": "
            << fibonacci_current() << std::endl;
    } while (fibonacci_next());
    // Report count of values written before overflow.
    std::cout << fibonacci_index() + 1 <<
        " Fibonacci sequence values fit in an " <<
        "unsigned 64-bit integer." << std::endl;


    //string myText;
    //ifstream MyReadFile("test.txt");
    //while (getline(MyReadFile, myText)) {
    //    // Output the text from the file
    //    cout << myText << endl;
    //}
    //MyReadFile.close();
    
    Car car1("BMW", "T-Rock", 2021);
    Car car2("Tesla", "Model Y", 2023);
    cout << car1.toString();
    cout << car2.toString();

    //int i1 = getInteger(1);
    //int i2 = getInteger(2);
    //int i3 = getInteger(3);
    //std::cout << "Sum of " << i1 << ", " << i2 << ", " << i3 << " is " << getSum(i1, i2, i3) << "\n";
    //std::cout << "Product of " << i1 << ", " << i2 << ", " << i3 << " is " << getProduct(i1, i2, i3) << "\n";
    //std::cout << "Biggest number of " << i1 << ", " << i2 << ", " << i3 << " is " << getBiggest(i1, i2, i3) << "\n";
    //std::cout << "Smallest number of " << i1 << ", " << i2 << ", " << i3 << " is " << getSmallest(i1, i2, i3) << "\n";



}


//class fileReader {
//public:
//    string fileName
//        
//    function string readFile(string fileName = fileName) {
//
//    }
//};