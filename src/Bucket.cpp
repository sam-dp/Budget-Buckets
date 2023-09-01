#include "../include/Bucket.h"
#include <string>
#include <utility>

// Constructor
Bucket::Bucket(std::string& bucketName, double bucketSize) : name(bucketName), size(bucketSize) {}

// Name methods
std::string Bucket::getName()  {
    return name;
}

void Bucket::setName(std::string newName) {
    name = std::move(newName);
}

// Size Methods
double Bucket::getSize() const {
    return size;
}

void Bucket::setSize(double newSize) {
    size = newSize;
}

// Value  Methods
double Bucket::getValue() const {
    return value;
}

void Bucket::setValue(double newValue) {
    value = newValue;
}

void Bucket::changeValue(double newValue) {
    size += newValue;
}
