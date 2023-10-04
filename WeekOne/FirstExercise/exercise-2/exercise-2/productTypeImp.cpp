#include "productType.h"
#include <iostream>


productType::productType() {
    productName = "";
    id = "";
    manufacturer = "";
    quantitiesInStock = 0;
    price = 0.0;
    discount = 0.0;
}

productType::productType(string name, string i, string manu, int quantities, double p, double d) {
    productName = name;
    id = i;
    manufacturer = manu;
    quantitiesInStock = quantities;
    price = p;
    discount = d;
}

productType::productType(int quantities, double p, double d) {
    productName = "";
    id = "";
    manufacturer = "";
    quantitiesInStock = quantities;
    price = p;
    discount = d;
}

productType::productType(string name, int quantities, double p, double d) {
    productName = name;
    id = "";
    manufacturer = "";
    quantitiesInStock = quantities;
    price = p;
    discount = d;
}


void productType::set(string name, string i, string manu, int quantities, double p, double d) {
    productName = name;
    id = i;
    manufacturer = manu;
    quantitiesInStock = quantities;
    price = p;
    discount = d;
}

void productType::print() const {
    cout << "Product Name: " << productName << endl;
    cout << "ID: " << id << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Quantities in Stock: " << quantitiesInStock << endl;
    cout << "Price: $" << price << endl;
    cout << "Discount: " << discount << "%" << endl;
}

void productType::setQuantitiesInStock(int x) { quantitiesInStock = x; }
void productType::updateQuantitiesInStock(int x) { quantitiesInStock = (quantitiesInStock + x < 0) ? 0 : quantitiesInStock + x; }
int productType::getQuantitiesInStock() const { return quantitiesInStock; }

void productType::setPrice(double x) { price = x; }
double productType::getPrice() const { return price; }
void productType::setDiscount(double d) { discount = d; }
double productType::getDiscount() const { return discount; };
