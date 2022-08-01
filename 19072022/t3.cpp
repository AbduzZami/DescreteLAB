#include <bits/stdc++.h>
using namespace std;


int binary_search(int find, int arr[], int left, int right)
{
    int cnt = 0;
    while (left <= right)
    {
        cnt++;
        int mid = (left + right) / 2;
        if (find < arr[mid])
        {
            right = mid - 1;
        }
        else if (find > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            cout << "Count: " << cnt << endl;
            return mid;
        }
    }
    cout << "Count: " << cnt << endl;
    return -1;
}

main()
{
    int arr[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int x;
    cin >> x;
    int ind = binary_search(x,arr,0,19);
    cout << "Index: " << ind+1 << endl;
}