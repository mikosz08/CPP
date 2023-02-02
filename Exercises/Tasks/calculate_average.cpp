#include <iostream>

using namespace std;

const int LEN = 5;
float arr[LEN] = {7.34, 2, 3.43, 4, 5};

int main()
{
    float avg;
    for (float i : arr)
    {
        cout << i << ", ";
        avg += i;
    }
    cout << "AVG: " << avg / LEN << endl;

    return 0;
}