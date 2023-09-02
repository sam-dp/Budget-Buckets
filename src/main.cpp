#include <iostream>
#include <string>

#include "../include/Bucket.h"
#include "../include/User.h"

int main() {
    User myUser("Sam", 1000.0);
    myUser.addBucket(Bucket("myBucket", 500));

    std::cout << "-- User and Bucket Information --\nUsername: " << myUser.getUsername()
              <<  "\nMonthly Income: " << myUser.getMonthlyIncome() << std::endl;
}