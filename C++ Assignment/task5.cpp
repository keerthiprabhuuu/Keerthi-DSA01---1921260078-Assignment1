
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, c = 2;

    int result1 = a + b * c;
    int result2 = (a + b) * c;
    int result3 = a - b / c;

    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;

    return 0;
}
