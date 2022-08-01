#include <bits/stdc++.h>
using namespace std;

int gcd_euclid(int x, int y)
{
    while (y != 0)
    {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}
main()
{

    int x, y;
    cout << "Input x and y" << endl;
    cin >> x >> y;
    cout << "gcd: " << gcd_euclid(x, y) << endl;
}