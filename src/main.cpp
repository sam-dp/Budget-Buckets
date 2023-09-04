#include <iostream>
#include <string>
#include <vector>

#include "../include/Bucket.h"
#include "../include/User.h"


void printInfo(User myUser) {
    std::cout << "---------------------------------" << std::endl;
    std::cout << "-- User and Bucket Information --" << "\n---------------------------------" << "\nUsername: " << myUser.getUsername() <<  "\nMonthly Income: $" << myUser.getMonthlyIncome() << std::endl;

    std::vector buckets = myUser.getAllBuckets();

    for(const Bucket& bucket : buckets) {
        std::cout << "\nBucket Name: " << bucket.getName() << "\nBucket Size: $" << bucket.getSize() << "\nBucket Value: $" << bucket.getValue() << std::endl;
    }

    std::cout << "---------------------------------" << std::endl;

}


int main() {
    // Create account
    User myUser("Sam", 600.0);
    myUser.addBucket("Spending", 100);

    printInfo(myUser);

}

