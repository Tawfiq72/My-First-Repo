#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a line: ";
    getline(cin, input);

    if (input.size() >= 2 && input[0] == '/' && input[1] == '/') {
        cout << "This is a single line comment." << endl;
    }

    else if (input.size() >= 4 && input[0] == '/' && input[1] == '*' &&
             input[input.size() - 2] == '*' && input[input.size() - 1] == '/') {
        cout << "This is a multi line comment." << endl;
    }

    else {
        cout << "This is not a comment." << endl;
    }

    return 0;
}
