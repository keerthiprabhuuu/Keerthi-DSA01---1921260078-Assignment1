
#include <iostream>
using namespace std;

int main() {
    int number = 10;
    double value = 3.5;

    double result = number + value;

    cout << "Integer: " << number << endl;
    cout << "Double: " << value << endl;
    cout << "Result: " << result << endl;

    int converted = static_cast<int>(value);
    cout << "Converted Value: " << converted << endl;

    return 0;
}
