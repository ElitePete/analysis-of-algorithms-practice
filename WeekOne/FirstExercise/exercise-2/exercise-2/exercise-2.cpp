// exercise-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "productType.h"

using namespace std;

int main() {

    // Write your main here

    productType product1("Keyboard", "001", "Corsair", 100, 99.99, 5.0);
    product1.print();

    productType product2;
    product2.set("Mouse", "002", "Corsair", 100, 99.99, 0.0);
    product2.print();

    product2.setPrice(89.99);
    product2.setDiscount(10.0);
    product2.updateQuantitiesInStock(-5);

    cout << "Post setting: " << endl;
    product2.print();

    return 0;

}
