#include <iostream>
#include <string>
#include <cstring>

using namespace std;

char string_array_1[] = "Hello ";
char string_array_2[] = "there!";

string text_1 = "Welcome ";
string text_2 = " Gandalf!";

int main()
{
    strcat_s(string_array_1, 50, string_array_2);
    cout << "C style: " << string_array_1 << endl;

    cout << "C++ style: " << text_1 + text_2 << endl;
    return 0;
}