#include <bits/stdc++.h>
using namespace std;

int gcdprimefactor(int x, int y)
{
    map<int, int> mpx, mpy;
    set<int> s;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            mpx[i]++;
            s.insert(i);
        }
    }

    for (int i = 2; i < y; i++)
    {
        if (y % i == 0)
        {
            mpy[i]++;
            s.insert(i);
        }
    }

    int ans = 1;
    for (auto e : s)
    {
        ans *= pow(e, min(mpx[e], mpy[e]));
    }
    return ans;
}
main()
{

    int x, y;
    cout << "Input x and y" << endl;
    cin >> x >> y;
    cout << "gcd: " << gcdprimefactor(x, y) << endl;
}