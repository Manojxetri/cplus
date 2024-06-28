#include <iostream>

using namespace std;

int main() {
    char inputChar;

    // Prompt the user for a character input
    cout << "Enter a character: ";
    cin >> inputChar;

    // Calculate the next character
    char nextChar = inputChar + 1;

    // Display the next character
    cout << "The next character is: " << nextChar << endl;

    return 0;
}
