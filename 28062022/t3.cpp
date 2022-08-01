#include <bits/stdc++.h>
using namespace std;

// returns char for a value
char toChar(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}


string fromDecitoBinary(double inputNum)
{
    int base = 2;
    string res = "";
    int index = 0; // Initialize index of result

    // Convert input number is given base by repeatedly
    // dividing it by base and taking remainder

    int inputbeforepoint = (int)inputNum;
    while (inputbeforepoint > 0)
    {
        res.push_back(toChar(inputbeforepoint % base));
        index++;
        inputbeforepoint /= base;
    }
    // Reverse the result
    reverse(res.begin(), res.end());

    return res;
}

double bigmod(int b, int n, int m)
{
    string a = fromDecitoBinary(n);
    reverse(a.begin(), a.end());
    int k = a.length();
    int x = 1;
    int power = b % m;
    for (int i = 0; i < k; i++)
    {
        if (a[i] == '1')
            x = (x * power) % m;
        power = (power * power) % m;
    }
    return x;
}

main()
{

    int b, n, m;
    cout << "Input b, n and m " << endl;
    cin >> b >> n >> m;
    cout << "b ^ n mod m = " << bigmod(b, n, m) << endl;
}