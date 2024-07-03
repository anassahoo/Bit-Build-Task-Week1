#include <iostream>
#include<string>
using namespace std;
int main() {
    //Variables to store the user's name and age
    string name;
    int age;
    //Prompting the user for their name
    cout << "Enter your name: ";
    getline(cin, name);
    //Prompting the user for their age
    cout << "Enter your age: ";
    cin >> age;
    //Printing the greeting message
    cout << "Hello " << name << ". You are " << age << " years old.\n";

    return 0;
}
