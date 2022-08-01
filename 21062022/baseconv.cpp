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

// return int value of a char
int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

// Function to convert a given decimal number
double toDeci(string str, int base)
{
    int len = str.length();
    double power = 1; // Initialize power of base
    double num = 0;   // Initialize result
    int i;

    // Decimal equivalent is str[len-1]*1 +
    // str[len-2]*base + str[len-3]*(base^2) + ...

    int dlen = len;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '.')
        {
            dlen = i;
        }
    }

    // for the part before decimal point
    for (i = dlen - 1; i >= 0; i--)
    {
        // A digit in input number must be
        // less than number's base
        if (val(str[i]) >= base)
        {
            printf("Invalid Number");
            return -1;
        }

        num += val(str[i]) * power;
        power = power * base;
    }

    // fpr the part after decimal point
    power = 2;
    for (i = dlen + 1; i < len; i++)
    {
        // A digit in input number must be
        // less than number's base
        if (val(str[i]) >= base)
        {
            printf("Invalid Number");
            return -1;
        }

        num += val(str[i]) / power;
        power = 1 / power * base;
    }

    return num;
}
string fromDeci(double inputNum, int base)
{
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
    res.push_back('.');


    // Calculation after decimal point
    double inputafterpoint = inputNum - (int)inputNum;

    while (inputafterpoint != 0.00)
    {
        inputafterpoint *= base;
        res.push_back(toChar((int)inputafterpoint));
        inputafterpoint = inputafterpoint - (int)inputafterpoint;
    }

    return res;
}

int main()
{
    double input = 10.625; // input number to convert from decimal to any base input number to convert to decimal from any base

    cout << "Decimal equivalent of "
         << "1010.1001"
         << " in base "
         << "2"
         << " is " + to_string(toDeci("1010.1001", 2)) << endl;
    cout << "Decimal equivalent of "
         << "1023.27"
         << " in base "
         << "8"
         << " is " + to_string(toDeci("1023.27", 8)) << endl;
    cout << "Decimal equivalent of "
         << "1A8C33.AA"
         << " in base "
         << "16"
         << " is " + to_string(toDeci("1A8C33.AA", 16)) << endl;
    cout << endl;
    cout << "Equivalent of " << input << " in base "
         << "2"
         << " is " << fromDeci(input, 2) << endl;
    cout << "Equivalent of " << input << " in base "
         << "8"
         << " is " << fromDeci(input, 8) << endl;
    cout << "Equivalent of " << input << " in base "
         << "16"
         << " is " << fromDeci(input, 16) << endl;

    cout << endl;

    cout << "Octal equivalent of 11111010111100.1001111 in base 2 is " << fromDeci(toDeci("11111010111100.1001111", 2), 8) << endl;
    cout << "Hexadecimal equivalent of 11111010111100.1001111 in base 2 is " << fromDeci(toDeci("11111010111100.1001111", 2), 16) << endl;

    return 0;
}
