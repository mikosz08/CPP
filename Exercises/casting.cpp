#include <iostream>

using namespace std;

float flt = -8.432f;
int32_t sgn;
uint32_t usgn;

int main()
{

    cout << "Before." << endl;
    cout << "Float:  " << flt << endl;
    cout << "int32:  " << sgn << endl;
    cout << "uint32: " << usgn << '\n'
         << endl;

    cout << sgn << " = " << flt << endl;
    sgn = flt;
    cout << usgn << " = " << sgn << '\n'
         << endl;
    usgn = sgn;

    cout << "After." << endl;
    cout << "Float:  " << flt << endl;
    cout << "int32:  " << sgn << endl;
    cout << "uint32: " << usgn << endl;

    float fahrenheit = 100.0f;
    int celsius;

    celsius = (5.0 / 9.0f) * (fahrenheit - 32.0f);

    cout << endl;
    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Celsius: " << celsius << endl;

    double weight = 534.99f;

    cout << endl;
    cout << "Float: " << weight << endl;
    cout << "Integer: " << (int)weight << endl;
    cout << "Fractional: " << weight - (int)weight << endl;

    return 0;
}