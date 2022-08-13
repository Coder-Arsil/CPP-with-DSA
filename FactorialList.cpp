#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1, current_number;
    cout << "Enter Number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        current_number = i;
        fact = 1;
        for (int j = 1; j <= current_number; j++)
        {
            fact *= j;
        }
        cout << "Factorial of " << i << " is : " << fact << endl;
    }

    return 0;
}
