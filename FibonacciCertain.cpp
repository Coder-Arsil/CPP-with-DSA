#include <iostream>
using namespace std;

int main()
{
    int n, fn = 0, sn = 1, result = 0;
    cout << "Enter Number : ";
    cin >> n;

    cout << fn << " " << sn << " ";
    result = fn + sn;
    while (result < n)
    {
        cout << result << " ";
        fn = sn;
        sn = result;
        result = fn + sn;
    }

    return 0;
}
