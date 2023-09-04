#include <iostream>
#include <string>
#include <vector>

#include "../include/Bucket.h"
#include "../include/User.h"

int main() {
    User myUser("Sam", 1000.0);
    myUser.addBucket("myBucket", 500);

    std::cout << "-- User and Bucket Information --\nUsername: " << myUser.getUsername() <<  "\nMonthly Income: " << myUser.getMonthlyIncome() << std::endl;

    std::vector buckets = myUser.getAllBuckets();

    for(const Bucket& bucket : buckets) {
        std::cout << "\nBucket Name: " << bucket.getName() << "\nBucket Size: " << bucket.getSize() << "\nBucket Value: " << bucket.getValue();
    }

}