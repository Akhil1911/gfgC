#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the array size of two arrays\n";
    cin >> m >> n;
    int arr1[m], arr2[n];
    cout << "Enter the array elements\n";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    cout << "\nThe commmon elements are : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
                cout << arr1[i] << " ";
        }
    }
    return 0;
}