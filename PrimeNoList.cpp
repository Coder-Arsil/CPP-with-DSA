#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, current_number;
    cout << "Enter Number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        current_number = i;
        count = 0;
        for (int j = 1; j <= current_number; j++)
        {
            if (current_number % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << current_number << endl;
        }
    }
    return 0;
}