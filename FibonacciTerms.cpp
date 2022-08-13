#include <iostream>
using namespace std;

int main()
{
    int n, fn = 0, sn = 1, result = 0;
    cout << "Enter Number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << fn << " ";
            continue;
        }
        if (i == 2)
        {
            cout << sn << " ";
            continue;
        }
    
        result = fn + sn;
        fn = sn;
        sn = result;
        cout << result << " ";
    }

    return 0;
}
