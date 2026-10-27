
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int marks;

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Arun";
    s1.marks = 85;

    s1.display();

    return 0;
}
