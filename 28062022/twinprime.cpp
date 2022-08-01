#include <bits/stdc++.h>
using namespace std;

#define int long long

main(){
    int n; cin >> n;
    vector<bool> Found;
    Found.assign(n, true);

    //sieve of eratosthenes
    for(int i = 4; i <= n; i+=2){
        Found[i] = false;
    }
    int l = (int)pow(n, 0.5);
    for(int i = 3; i < n; i+=2){
        for(int j = 2*i; j <= n; j+=i){
            Found[j] = false;
        }
    }


    for(int i = 2; i < n; i++){
        if(Found[i] && Found[i+2]){
            cout << i <<" "<< i+2 <<  endl;
        }
    }
    return 0;
}