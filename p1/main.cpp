#include <iostream>

using namespace std;

int main()
{
    //Max value for counting
    int endDelimiter = 100;

    //String creation and print
    for (int i = 1; i <= endDelimiter; i++)
    {
        string str;
        if (i % 3 == 0)
            str.append("Foo");
        if (i % 5 == 0)
            str.append("Baa");
        if (i % 3 != 0 && i % 5 != 0)
            str.append(std::to_string(i));
        cout << str << endl;
    }
}