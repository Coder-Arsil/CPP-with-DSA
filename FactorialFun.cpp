#include <iostream>
using namespace std;

long int fact_fun(int n); // global declaration
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    cout << "Factorial of " << n << " is : " << fact_fun(n); // call

    return 0;
}
long int fact_fun(int n) // define
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        n = n * fact_fun(n - 1); // recursion process
        return n;
    }
}