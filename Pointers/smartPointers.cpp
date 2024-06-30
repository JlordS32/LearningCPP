#include <iostream>
#include <memory>

using namespace std;

int main() {
    // Initialising unique pointers (make sure to use <memory> library)
    unique_ptr<int> unPtr1 = make_unique<int>(25);

    // variable.get() to get address
    cout << unPtr1.get() << endl;
    // Value is accessed by deferencing by *.
    cout << *unPtr1 << endl;

    // Moving unique pointer to another unique pointer
    // unPtr1 is deleted when moved to different pointer. 
    unique_ptr<int> unPtr2 = move(unPtr1);

    // Same values as above.
    cout << unPtr2.get() << endl;
    cout << *unPtr2 << endl;

    // Checkings if unPtr1 is empty.
    if (unPtr1.get() == NULL) {
        cout << unPtr1.get() << endl;
        cout << "First array now empty";
    }

    return 0;
}