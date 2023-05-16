#include <iostream>

using namespace std;

class MyClass {
public:
    int data;

    // Default constructor
    MyClass() {
        cout << "Default constructor called" << endl;
        data = 0;
    }

    // Parameterized constructor
    MyClass(int value) {
        cout << "Parameterized constructor called" << endl;
        data = value;
    }

    // Copy constructor
    MyClass(const MyClass& other) {
        cout << "Copy constructor called" << endl;
        data = other.data;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    // Create an object using the default constructor
    MyClass obj;
    // Create an object using the parameterized constructor
    MyClass obj1(42);

    // Create another object using the copy constructor
    MyClass obj2(obj1);

    // Output the values of the objects
    cout << "obj1.data: " << obj1.data << endl;
    cout << "obj2.data: " << obj2.data << endl;

    return 0;
}

