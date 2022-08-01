#include <bits/stdc++.h>
using namespace std;


void greedycoin(int c[],int r, int n){
    int cnt = 0;
    int totalcoins = 0;
    for (int i = 0; i < r; i++)
    {
        cnt++;
        int d = 0;
        while(n>=c[i]){
            cnt++;
            d++;
            n-=c[i];
        }
        
        cout << "Coin " << c[i] << " " << d << " " << endl;
        totalcoins+=d;
    }
    cout << "Count: " << cnt << endl;
    cout << "Total coins: " << totalcoins << endl;
    
}



main(){
    int arr[15] = {50000,20000,10000,5000,2000,1000,500,200,100,50,20,10,5,2,1};
    greedycoin(arr,15,321797);
}