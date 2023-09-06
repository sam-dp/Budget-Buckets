#include <iostream>
#include <string>
#include <vector>

#include "../include/Bucket.h"
#include "../include/User.h"

bool contains(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

void printInfo(User myUser) {
    std::cout << "---------------------------------" << "\n"
              << "-  User and Bucket Information  -" <<  "\n"
              << "---------------------------------" <<  "\n"
              << "Username: " << myUser.getUsername() <<  "\n"
              << "Monthly Income: $" << myUser.getMonthlyIncome()
              << std::endl;

    std::vector buckets = myUser.getAllBuckets();

    for(const Bucket& bucket : buckets) {
        std::cout << "\n"
                  << "Bucket Name: " << bucket.getName() <<  "\n"
                  << "Bucket Size: $" << bucket.getSize() <<  "\n"
                  << "Bucket Value: $" << bucket.getValue()
                  << std::endl;
    }

    std::cout << "---------------------------------" << std::endl;

}

void choiceDialogue(const User& user) {
    std::cout << "---------------------------------" << "\n"
              << "-        Budget Buckets         -" <<  "\n"
              << "---------------------------------" <<  "\n"
              << "[1] View Bucket Information" <<  "\n"
              << "[2] Add a Bucket" <<  "\n"
              << "[3] Edit a Bucket" <<  "\n"
              << "[4] Make a Payment on a bucket" <<  "\n\n" << std::endl;

    int choice = -1;
    int choices[] = {1, 2, 3, 4};

    //"Enter one of the above:";
    std::cin >> choice;

    if(contains(choices, sizeof(choices), choice)) {
    switch(choice) {
        case 1:
            printInfo(user);
        case 2:

        case 3:
        case 4:
        default:
    }

    
}

int main() {
    // Create account
    User myUser("Sam", 600.0);
    myUser.addBucket("Spending", 100);
    myUser.addBucket("Savings", 300);
    myUser.addBucket("Bills", 200);

    //printInfo(myUser);
    userDialogue();

    return 0;

}

