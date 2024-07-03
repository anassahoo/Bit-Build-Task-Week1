#include <iostream>
using namespace std;

int main() {
    // Declaring Variables
    int num;
    
    // Taking num from user
    cout << "Enter the num: ";
    cin >> num;
    
    // Checking Conditions
    if (num > 0) {
        // The number is Positive
        cout << "The num " << num << " is Positive";
    } else if (num == 0) {
        // The number is Zero
        cout << "The num " << num << " is Zero";
    } else {
        // The number is Negative
        cout << "The num " << num << " is Negative";
    }
    
    // Ending the program
    return 0;
}