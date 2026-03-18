#include <cstring>
#include <iostream>
using namespace std;

int main()
{

    int len;

    string str = "GeeksforGeeks";

    len = str.size();

    cout << "Reverse of the string: ";
    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}