#include "../include/User.h"
#include "../include/Bucket.h"
#include <map>
#include <string>

// Constructor
User::User(const std::string& userName, double userMonthlyIncome)
    : username(userName), monthlyIncome(userMonthlyIncome) {}

// Name functions
std::string User::getUsername() {
    return username;
}

void User::setUsername(std::string& newUsername) {
    username = newUsername;
}

// Bucket functions
void User::addBucket(const Bucket& bucket) {
    userBuckets.insert({bucket.getName(), bucket});
}

void User::removeBucket(const std::string& bucketName) {
    userBuckets.erase(bucketName);
}

[[nodiscard]] Bucket& User::getBucket(const std::string& bucketName) {
    // Find the bucket in the map
    auto bucketIterator = userBuckets.find(bucketName);

    // Check if the bucket was found
    if (bucketIterator != userBuckets.end()) {
        // Return a reference to the found bucket
        return bucketIterator->second;
    } else {
        // Handle the case when the bucket is not found
        // For example, you could throw an exception or return a default bucket.
        // For now, let's assume you throw an exception.
        throw std::runtime_error("Bucket not found.");
    }
}

void User::changeBucketValue(const std::string& bucketName, double sumNum) {
    Bucket& bucket = getBucket(bucketName);
    bucket.changeValue(sumNum);
}

// Monthly income functions
[[nodiscard]] double User::getMonthlyIncome() const {
    return monthlyIncome;
}

void User::setMonthlyIncome(double newIncome) {
    monthlyIncome = newIncome;
}
