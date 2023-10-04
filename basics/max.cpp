#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int max1 = max(c, d);
    cout << max(a,max(b,max1));
}