#include <iostream>
#include <iomanip>
using namespace std;

double calculateFare(double distance) {
    if (distance < 0)
        return -1;

    constexpr double baseFare = 30.0;
    constexpr double includedDistance = 5.0;
    constexpr double extraRate = 5.0;

    if (distance <= includedDistance)
        return baseFare;

    return baseFare + (distance - includedDistance) * extraRate;
}

int main() {
    double distance;

    cout << "Enter journey distance in km: ";

    if (!(cin >> distance)) {
        cout << "Invalid input. Enter a number.\n";
        return 1;
    }

    double fare = calculateFare(distance);

    if (fare < 0) {
        cout << "Distance cannot be negative.\n";
    } else {
        cout << fixed << setprecision(2);
        cout << "Journey distance: " << distance << " km\n";
        cout << "Total fare: Rs. " << fare << '\n';
    }

    return 0;
}
