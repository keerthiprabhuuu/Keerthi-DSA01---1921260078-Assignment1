
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double balance = 1000.00;
    double fare = 80.00;
    int journeys;

    cout << "Enter number of journeys: ";
    cin >> journeys;

    if (journeys <= 0) {
        cout << "Invalid number of journeys." << endl;
        return 0;
    }

    cout << fixed << setprecision(2);

    for (int i = 1; i <= journeys; i++) {
        if (balance >= fare) {
            balance -= fare;

            cout << "Journey " << i
                 << ": Fare Rs. " << fare
                 << ", Balance Rs. " << balance
                 << endl;
        } else {
            cout << "Insufficient balance for journey "
                 << i << endl;
            break;
        }
    }

    cout << "Final balance: Rs. " << balance << endl;

    return 0;
}
