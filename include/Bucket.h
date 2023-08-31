#ifndef BUDGET_BUCKETS_BUCKET_H
#define BUDGET_BUCKETS_BUCKET_H

#include <string>

class Bucket {
private:
    std::string name;
    double size;
    double value;

public:

    // Constructor
    Bucket(std::string name, double size);

    // Name methods
    std::string getName();
    void setName(std::string newName);

    // Size methods
    double getSize() const;
    void setSize(double newSize);

    // Value methods
    double getValue() const;
    void setValue(double newValue);
    void changeValue(double newValue);

};

#endif //BUDGET_BUCKETS_BUCKET_H
