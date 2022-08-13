#include <iostream>
using namespace std;

int main()
{
    int n, sq, sum = 0, cp;
    cout << "Enter Number : ";
    cin >> n;

    cp = n;
    while (n > 0)
    {
        sq = n % 10;
        n = n / 10;
        sum += (sq * sq * sq);
    }
    if (sum == cp)
    {
        cout << cp << " is Armstrome number";
    }
    else
    {
        cout << cp << " is not an Armstrome number";
    }
    return 0;
}
