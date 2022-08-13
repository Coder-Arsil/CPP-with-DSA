#include <iostream>
using namespace std;

int main()
{   
    int i, j, n;
    int current_number;
    int count;

    cout << "Enter N : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        current_number = i;
        count = 0;
        for (j = 1; j <= current_number; j++)
        {
            if (current_number % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
           cout<< current_number << endl;
        }
    }
    return 0;
}