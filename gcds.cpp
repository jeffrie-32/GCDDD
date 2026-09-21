/*
Description: This program finds the Greatest Common Divisor (GCD) of two non-negative numbers using recursion.
Programmed by: Jeffrie Ganding, BSIT, 48160, Platform Technology
Last Modified: September 20, 2026
*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    cout << "gcd(" << a << ", " << b << ")";

    if (b == 0)
    {
        cout << " -> return " << a << endl;
        return a;
    }

    cout << ", " << a % b << endl;

    return gcd(b, a % b);
}

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a < 0 || b < 0)
    {
        cout << "Please enter non-negative numbers only." << endl;
        return 0;
    }

    if (a == 0 && b == 0)
    {
        cout << "Both numbers cannot be zero." << endl;
        return 0;
    }

    int result = gcd(a, b);

    cout << "GCD = " << result << endl;

    return 0;
}