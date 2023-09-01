#ifndef BUDGET_BUCKETS_USER_H
#define BUDGET_BUCKETS_USER_H

#include "../include/Bucket.h"
#include <map>
#include <string>


class User {
private:
    std::string username;
    std::map<std::string, Bucket> userBuckets;
    double monthlyIncome;

public:

    // Name functions
    std::string getUsername();
    void setUsername();

    // Bucket vector functions
    void addBucket(std::string bucketName, double size);
    void removeBucket(std::string name);
    void changeBucketSize(std::string name, double sumNum);

    // monthlyIncome functions
    double getMonthlyIncome();
    void setMonthlyIncome(double newIncome);


};




#endif //BUDGET_BUCKETS_USER_H

