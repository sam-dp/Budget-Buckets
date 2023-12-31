#ifndef BUDGET_BUCKETS_USER_H
#define BUDGET_BUCKETS_USER_H

#include "../include/Bucket.h"
#include <map>
#include <string>
#include <vector>


class User {
private:
    std::string username;
    std::map<std::string, Bucket> userBuckets;
    double monthlyIncome;

public:

    // Constructor
    User(const std::string& userName, double userMonthlyIncome);

    // Name functions
    std::string getUsername();
    void setUsername(std::string& newUsername);

    // Bucket vector functions
    void addBucket(const std::string& bucketName, double bucketSize);
    void removeBucket(const std::string& bucketName);
    void changeBucketValue(const std::string& bucketName, double sumNum);
    Bucket& getBucket(const std::string& bucketName);
    std::vector<Bucket> getAllBuckets();



    // monthlyIncome functions
    double getMonthlyIncome() const;
    void setMonthlyIncome(double newIncome);


};




#endif //BUDGET_BUCKETS_USER_H

