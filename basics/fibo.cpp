#include<iostream>
using namespace std;
int main()
{
    int a = 1, b = 0, c = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++){
        cout << c << " ";
        c = a + b;
        a = b;
        b = c;
    }
}