#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[100], b[100];
    cout << "Enter String : ";
    cin >> a;

    strcpy(b, a);
    strrev(b);
    if (strcmp(a, b) == 0)
    {
        cout << a << " is Palindrome";
    }
    else
    {
        cout << a << " is not Palindrome";
    }

    return 0;
}
