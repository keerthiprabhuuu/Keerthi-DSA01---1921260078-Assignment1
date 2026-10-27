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
    double distances[] = {2, 5, 8, 10, -1};

    cout << fixed << setprecision(2);
    cout << "Fare Design Evaluation\n";

    for (double distance : distances) {
        double fare = calculateFare(distance);

        cout << "Distance: " << distance << " km | ";

        if (fare < 0)
            cout << "Invalid input\n";
        else
            cout << "Fare: Rs. " << fare << '\n';
    }

    cout << "\nRecommendation:\n";
    cout << "Use a separate fare calculation function.\n";
    cout << "It improves reusability and testability.\n";
    cout << "Constants make fare rules easier to maintain.\n";

    return 0;
}
