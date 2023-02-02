#include <iostream>
#include <float.h>

using namespace std;

int main()
{
    cout << "CHAR_BIT: " << CHAR_BIT << '\n'
         << endl;

    cout << "SCHAR_MIN: " << SCHAR_MIN << endl;
    cout << "SCHAR_MAX: " << SCHAR_MAX << '\n'
         << endl;

    cout << "UCHAR_MAX: " << UCHAR_MAX << '\n'
         << endl;

    cout << "CHAR_MIN: " << CHAR_MIN << endl;
    cout << "CHAR_MAX: " << CHAR_MAX << '\n'
         << endl;

    cout << "SHRT_MIN: " << SHRT_MIN << endl;
    cout << "SHRT_MAX: " << SHRT_MAX << endl;
    cout << "USHRT_MAX: " << USHRT_MAX << '\n'
         << endl;

    cout << "INT_MIN: " << INT_MIN << endl;
    cout << "INT_MAX: " << INT_MAX << endl;
    cout << "UINT_MAX: " << UINT_MAX << '\n'
         << endl;

    cout << "LONG_MIN: " << LONG_MIN << endl;
    cout << "LONG_MAX: " << LONG_MAX << endl;
    cout << "ULONG_MAX: " << ULONG_MAX << endl;
    cout << "LLONG_MIN: " << LLONG_MIN << endl;
    cout << "LLONG_MAX: " << LLONG_MAX << endl;
    cout << "ULLONG_MAX: " << ULLONG_MAX << '\n'
         << endl;

    cout << "DBL_MAX" << DBL_MAX << endl;
    cout << "DBL_MIN" << DBL_MIN << endl;
    return 0;
}

// CHAR_BIT: 8

// SCHAR_MIN: -128
// SCHAR_MAX: 127

// UCHAR_MAX: 255

// CHAR_MIN: -128
// CHAR_MAX: 127

// SHRT_MIN: -32768
// SHRT_MAX: 32767
// USHRT_MAX: 65535

// INT_MIN: -2147483648
// INT_MAX: 2147483647
// UINT_MAX: 4294967295

// LONG_MIN: -2147483648
// LONG_MAX: 2147483647
// ULONG_MAX: 4294967295
// LLONG_MIN: -9223372036854775808
// LLONG_MAX: 9223372036854775807
// ULLONG_MAX: 18446744073709551615

// DBL_MAX1.79769e+308
// DBL_MIN2.22507e-308