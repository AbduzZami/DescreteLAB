#include <bits/stdc++.h>
using namespace std;

//division with positive remainder
pair<int,int> bitdiv_pos_remainder(int a, int b)
{
    //finding the result by bitdiv()
    int div = a/b;
    int rem = a%b;

    if (a < 0 && rem!=0)
    {
        if (b < 0)
        {
            rem = rem - b; 
            div = div + 1;
        }
        else
        {
            rem = rem + b; 
            div = div - 1;
        }
    }

    //returns the pair of quotient and remainder
    return {div,rem};
}

main(){
    int x,y;
    cin >> x >> y;
    cout << "As compiler x/y = " << x/y << ", Remainder = " << x%y << endl;
    cout << "As division rule x/y = " << bitdiv_pos_remainder(x,y).first << ", Remainder = " << bitdiv_pos_remainder(x,y).second << endl;
    
}