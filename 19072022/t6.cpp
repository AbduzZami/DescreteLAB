/*#############################################
###############  HASBI ALLAH  #################
###############################################
                                               
    ########       ########       ########     
    ########       ########       ########     
    ###  ###       ###  ###            ###     
    ###  ###            ###           ###      
    ########       ########          ###       
    ########       ########         ###        
    ###  ###       ###             ###         
    ###  ###       ###            ###          
    ###  ###       ########       ########     
    ###  ###       ########       ########     
                                               
###############################################
#############################################*/


#include <bits/stdc++.h>
using namespace std;

#define ll     long long
#define ull    unsigned long long
#define YES    cout << "YES\n"
#define NO     cout << "NO\n"
#define NL     cout<<endl;
#define LL_INF (1LL << 62)
#define INF    (1 << 30)
#define mod    1000000007
#define N7     10000007
#define N5     100005
#define INF              1e9
#define pi               acos(-1)
#define F                first
#define S                second
#define LL_INF           1LL<<62
#define twopow(x)        (1LL<<x)
#define Checkbit(x, k)   (x & (1LL << k))
#define mem(name,value)  memset(name, value, sizeof(name))
#define binary(x)        bitset<31>(x)
#define decimal(x)       fixed<<setprecision(x)using namespace std;
#define hutaya ios_base::sync_with_stdio(false);
#define fala cin.tie(NULL);

#define pb push_back
#define all(v) v.begin(),v.end()
#define loop(begin, end) for (int i = begin; i < end; i++)
#define loopi(i,begin,end) for (int i = begin; i < end; i++)
#define loops(i,begin,end,n) for (int i = begin; i < end; i+=n)
#define inputarray(arr,n) for (int i = 0; i < n; i++){cin >> arr[i];}
#define outputarray(arr,n) for (int i = 0; i < n; i++){cout << arr[i] << ' ';} cout << endl;
#define graph vector<vector<int>>
//resize _graph.resize(n+1,vector<int>());
#define int long long int


void selection_sort(int arr[], int n){
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt++;
        int minimum = arr[i], minindex = i;
        for (int j = i+1; j < n; j++){
            cnt++;
            if(arr[j]<minimum){
                minimum = arr[j];
                minindex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
        
    }
    
}


main(){
    int arr[5] = {2,1,5,3,4};
    selection_sort(arr,5);
    outputarray(arr,5);
}