#include <iostream>

using std::cout;
using std::cin;

int main() {

    char num1, op, num2;

    cout << "Input expression:\n";
    cin >> num1 >> op >> num2;



    if (num1 < '0' || num1 > '9')
    {
        cout << "First number error\n";
    }
    else if (op != '*')
    {
        cout << "This is not multiplication\n";
    }
    else if (num2 < '0' || num2 > '9')
    {
        cout << "Second number error\n";
    }
    else 
    {
        int result = (num1 - '0') * (num2 - '0');

        cout << "Result: " << result << "\n";
    }

}
