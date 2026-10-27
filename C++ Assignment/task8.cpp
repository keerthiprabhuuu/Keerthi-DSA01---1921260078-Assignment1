
#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    string name;
    int age;
    double balance;

    // Read name
    cout << "Enter your name: ";
    getline(cin, name);

    if (name.empty()) {
        cout << "Invalid name!" << endl;
        return 1;
    }

    // Read and validate age
    cout << "Enter your age: ";
    if (!(cin >> age) || age <= 0) {
        cout << "Invalid age!" << endl;
        return 1;
    }

    // Read and validate balance
    cout << "Enter your bank balance: ";
    if (!(cin >> balance) || balance < 0) {
        cout << "Invalid balance!" << endl;
        return 1;
    }

    // Print the details
    cout << "\n--- User Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Bank Balance: Rs. " << balance << endl;

    return 0;
}
