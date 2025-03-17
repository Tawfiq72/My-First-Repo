#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter an expression: ";
    cin >> input;

    string operators = "+-*/%=<>!&|^";
    int count = 0;

    for (char ch : input) {
        for (char op : operators) {
            if (ch == op) {
                cout << "operator" << ++count << " : " << ch << endl;
                break;
            }
        }
    }
    cout << "Number of operators = " << count << endl;

    return 0;
}
