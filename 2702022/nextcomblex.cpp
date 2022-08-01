#include <bits/stdc++.h>
using namespace std;

int *next_rCombination(int a[], int n, int r)
{
    int i = r - 1;
    while (a[i] == n - r + i + 1)
    {
        i--;
    }
    int temp = a[i] - '0';
    temp++;
    a[i] = temp + '0';
    for (int j = i + 1; j < r; j++)
    {
        temp = a[i] - '0';
        temp += j - i;
        a[j] = temp + '0';
    }
    return a;
}

main()
{

    int a[] = {1 ,2, 5};
    int *arr = next_rCombination(a, 5, 3);
    cout << "Main set [1, 2, 3, 4, 5]\n";
    cout << "Current subset [1, 2, 5]\n";
    cout << "Next subset is [";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "]" << endl;
}