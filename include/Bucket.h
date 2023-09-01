#ifndef BUDGET_BUCKETS_BUCKET_H
#define BUDGET_BUCKETS_BUCKET_H

#include <string>

class Bucket {
private:
    std::string name;
    double size;
    double value{};

public:

    // Constructor
    Bucket(std::string& bucketName, double bucketSize);

    // Name functions
    std::string getName();
    void setName(std::string newName);

    // Size functions
    double getSize() const;
    void setSize(double newSize);

    // Value functions
    double getValue() const;
    void setValue(double newValue);
    void changeValue(double newValue);

};

#endif //BUDGET_BUCKETS_BUCKET_H
