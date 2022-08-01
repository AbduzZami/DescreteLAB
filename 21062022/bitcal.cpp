#include <bits/stdc++.h>
using namespace std;

//addition
int bitsum(int x, int y)
{
    int sum = x ^ y; // XOR returns the sum
    int carry = x & y; // AND returns the carry

    //continue until carry is zero
    while (carry)
    {
        sum = x ^ y; //updating sum
        carry = x & y; //updating carry
        carry <<= 1; // left shifting by 1
        x = sum; // updating x
        y = carry; // updating y
    }

    return sum;
}

//subtraction
int bitsub(int x, int y)
{

    int sub = x ^ y; // XOR returns the sum
    int borrow = (~x) & y; // ~ returns 2's compliment and AND returns the carry

    //continue until borrow is zero
    while (borrow)
    {
        sub = x ^ y; // updating sub
        borrow = (~x) & y; // updating borrow
        borrow <<= 1; // left shifting borrow by 1
        x = sub; // updating x
        y = borrow; // updating y
    }

    return sub;
}

//multiplication
int bitmul(int x, int y)
{
    int ispos = 1; // answer negetive or positive checker

    if (x < 0 && y >= 0) // only x neg then answer negetive
    {
        ispos = -1;
        x = bitsub(0, x); // making negetive x postive
    }
    else if (y < 0 && x >= 0) // only y neg then answer negetive
    {
        ispos = -1;
        y = bitsub(0, y); // making negetive y postive
    }
    else if (x < 0 && y < 0) // x and y both negetive then answer is positive
    {
        ispos = 1;
        x = bitsub(0, x); // making negetive x postive
        y = bitsub(0, y); // making negetive y postive
    }

    int mul = 0; // initializing answer

    for (int i = 0; i < y; i++)
    {
        mul = bitsum(mul, x); //adding x with mul
    }

    // returning the answer with corresponding sign
    if (ispos == 1)
    {
        return mul;
    }
    else
    {
        return bitsub(0, mul);
    }
}

//division as compiler
//returns pair of quotient and remainder
pair<int,int> bitdiv(int x, int y)
{
    int rx = x; // stores the initial value of x
    int ispos = 1; // quotient sign checker
    int rispos = 1; // remainder sign checker

    if (x < 0 && y >= 0) // only x neg then quotient negetive and remainder negetive
    {
        ispos = -1;
        rispos = -1;
        x = bitsub(0, x);
    }
    else if (y < 0 && x >= 0) // only y neg then quotient negetive and remainder positive
    {
        ispos = -1;
        rispos = 1;
        y = bitsub(0, y);
    }
    else if (x < 0 && y < 0) // both neg then quotient positive and remainder negetive
    {
        ispos = 1;
        rispos = -1;
        x = bitsub(0, x);
        y = bitsub(0, y);
    }

    int div = 0; // initializing answer
    int ys = y; // storing value of y for addition purpose

    //continue until ys > x
    while (true)
    {
        if (ys <= x)
        {
            ys = bitsum(ys, y); // ys = ys + y
            div++; // increasing quotient
        }
        else
        {
            break;
        }
    }

    //finding remainder
    ys = bitsub(ys, y);
    int remainder = bitsub(rx,bitmul(ys,rispos));

    //returning a pair of quotient and remainder
    return {bitmul(div, ispos),remainder};
}

//division with positive remainder
pair<int,int> bitdiv_pos_remainder(int a, int b)
{
    //finding the result by bitdiv()
    int div = bitdiv(a, b).first;
    int rem = bitdiv(a, b).second;

    if (a < 0 && rem!=0)
    {
        if (b < 0)
        {
            rem = bitsub(rem, b); // rem = rem + b
            div = bitsum(div, 1); // div = div + 1
        }
        else
        {
            rem = bitsum(rem, b); // rem = rem - b
            div = bitsub(div, 1); // div = div - 1
        }
    }

    //returns the pair of quotient and remainder
    return {div,rem};
}

main()
{
        int x,y;
        cin >> x >> y;

        cout << x << " + " << y << " = " << bitsum(x, y) << endl;
        cout <<  x << " - " << y << " = " << bitsub(x, y) << endl;
        cout <<  x << " * " << y << " = " << bitmul(x, y) << endl;
        cout << "As compiler: " << x << " / " << y << " = " << bitdiv(x, y).first << " Remainder = " << bitdiv(x, y).second << endl;
        cout << "As divisor rule: " <<  x << " / " << y << " = " << bitdiv_pos_remainder(x,y).first << " Remainder = " << bitdiv_pos_remainder(x,y).second << endl;
}