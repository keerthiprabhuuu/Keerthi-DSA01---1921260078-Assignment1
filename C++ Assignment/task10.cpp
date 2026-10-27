#include <iostream>
#include <iomanip>
using namespace std;

double calculateFare(double distance) {
    if (distance < 0)
        return -1;

    if (distance <= 5)
        return 30.0;

    return 30.0 + (distance - 5) * 5.0;
}

int main() {
    double distances[] = {2, 5, 8, 10, -1};
    double expected[] = {30, 30, 45, 55, -1};

    cout << fixed << setprecision(2);

    for (int i = 0; i < 5; i++) {
        double actual = calculateFare(distances[i]);

        cout << "Distance: " << distances[i] << " km | ";

        if (actual == expected[i])
            cout << "PASS\n";
        else
            cout << "FAIL | Expected: " << expected[i]
                 << ", Actual: " << actual << '\n';
    }

    return 0;
}
