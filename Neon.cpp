#include <iostream>
using namespace std;

int main()
{
    int n, sq, sum = 0, cp;
    cout << "Enter Number : ";
    cin >> n;

    sq = n * n;
    while (sq > 0)
    {
        sum += sq % 10;
        sq = sq / 10;
    }
    if (sum == n)
    {
        cout << n << " is Neon number";
    }
    else
    {
        cout << n << " is not a Neon number";
    }
    return 0;
}
