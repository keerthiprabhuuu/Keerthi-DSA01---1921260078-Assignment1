
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Initial bank balance
    double balance = 1000.00;

    // Fare calculation
    int fare = 80;
    int tickets = 3;
    double totalFare = fare * tickets;

    // Calculate remaining balance
    balance -= totalFare;

    cout << fixed << setprecision(2);

    cout << "Initial balance: Rs. 1000.00" << endl;
    cout << "Fare per ticket: Rs. " << fare << endl;
    cout << "Number of tickets: " << tickets << endl;
    cout << "Total fare: Rs. " << totalFare << endl;
    cout << "Remaining balance: Rs. " << balance << endl;

    // Conditional operator
    cout << (balance >= 100 ? "Sufficient balance"
                            : "Low balance") << endl;

    return 0;
}
