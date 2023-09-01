#include "../include/Bucket.h"
#include <string>

// Constructor
Bucket::Bucket(const std::string& bucketName, double bucketSize)
    : name(bucketName), size(bucketSize) {}

// Name methods
const std::string& Bucket::getName() const {
    return name;
}

void Bucket::setName(const std::string& newName) {
    name = newName;
}

// Size Methods
double Bucket::getSize() const{
    return size;
}

void Bucket::setSize(double newSize) {
    size = newSize;
}

// Value  Methods
double Bucket::getValue() const{
    return value;
}

void Bucket::setValue(double newValue) {
    value = newValue;
}

void Bucket::changeValue(double newValue) {
    size += newValue;
}
