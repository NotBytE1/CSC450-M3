#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber, thirdNumber;

    // Ask the user for three integer values.
    cout << "Enter the first integer: ";
    if (!(cin >> firstNumber)) {
        cerr << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    cout << "Enter the second integer: ";
    if (!(cin >> secondNumber)) {
        cerr << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    cout << "Enter the third integer: ";
    if (!(cin >> thirdNumber)) {
        cerr << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    // Store a copy of each value in dynamically allocated memory.
    int* firstPointer = new int(firstNumber);
    int* secondPointer = new int(secondNumber);
    int* thirdPointer = new int(thirdNumber);

    cout << "\nOriginal variable values:" << endl;
    cout << "First number: " << firstNumber << endl;
    cout << "Second number: " << secondNumber << endl;
    cout << "Third number: " << thirdNumber << endl;

    cout << "\nPointer contents (value and memory address):" << endl;
    cout << "First pointer: " << *firstPointer << " at " << firstPointer << endl;
    cout << "Second pointer: " << *secondPointer << " at " << secondPointer << endl;
    cout << "Third pointer: " << *thirdPointer << " at " << thirdPointer << endl;

    // Release the allocated memory when it is no longer needed.
    delete firstPointer;
    delete secondPointer;
    delete thirdPointer;

    firstPointer = nullptr;
    secondPointer = nullptr;
    thirdPointer = nullptr;

    cout << "\nDynamic memory released successfully." << endl;
    return 0;
}
