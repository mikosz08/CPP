#include <iostream>

using namespace std;

// #define AGE_LENGTH 4
const int AGE_LENGTH = 4;

int age[AGE_LENGTH];
float temperature[] = {35.442, 28.3435, 27.433};

int get_size(int arr[]);

int main()
{
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    cout << "The Age array has " << AGE_LENGTH << " elements" << endl;
    for (float a : age)
    {
        cout << "Age = " << a << endl;
    }

    cout << "The Temperature array has " << sizeof(temperature) / sizeof(float) << " elements" << endl;
    for (float temp : temperature)
    {
        cout << "Temp = " << temp << endl;
    }

    return (0);
}
