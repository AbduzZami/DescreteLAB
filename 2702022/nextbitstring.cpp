#include <bits/stdc++.h>
using namespace std;

string next_bit_string(string b){
    reverse(b.begin(),b.end());
    int i = 0;
    while (b[i]=='1')
    {
        b[i]='0';
        i++;
    }
    b[i]='1';
    reverse(b.begin(),b.end());
    return b;
    
}

main(){
        string a;
        cin >> a;
        cout << "In case of " << a << " next bit string is " << next_bit_string(a) << endl;
}