#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Addition : " << num1 + num2 << endl;
    cout << "Subtraction : " << num1 - num2 << endl;
    cout << "Multiplication : " << num1 * num2 << endl;
    cout << "Division : " << num1 / num2 << endl;
    cout << "Modulus : " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
    cout << endl;
    int age;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Is age even? : " << (age % 2 == 0) << endl;
    cout << "Can vote? : " << (age >= 18) << endl;
    return 0;
}