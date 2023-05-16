#include <iostream>

using namespace std;

class MyClass 
{
public:
    MyClass() 
    {
        cout << "Constructor called" << endl;
    }

    ~MyClass() 
    {
        cout << "Destructor called" << endl;
    }
};

int main() 
{
    MyClass obj; // Create an object

    return 0; // Object 'obj' goes out of scope and destructor is automatically called
}

