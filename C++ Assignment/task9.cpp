#include <iostream>
#include <iomanip>
using namespace std;

double calculateFare(double distance) {
    if (distance < 0) {
        return -1;
    }

    if (distance <= 5) {
        return 30.0;
    }

    return 30.0 + (distance - 5) * 5.0;
}

int main() {
    double distances[] = {2, 5, 8, 10, -1};

    cout << fixed << setprecision(2);

    for (double distance : distances) {
        double fare = calculateFare(distance);

        cout << "Distance: " << distance << " km -> ";

        if (fare < 0) {
            cout << "Invalid distance\n";
        } else {
            cout << "Fare: Rs. " << fare << '\n';
        }
    }

    return 0;
}
