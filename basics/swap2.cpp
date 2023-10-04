#include <iostream>
using namespace std;
int main()
{
    int first, second;
    cout << "Enter first number : ";
    cin >> first;
    cout << endl
         << "Enter second number : ";
    cin >> second;
    // first = 10 , second = 20
    first = first + second; //10+20=30
    second = first - second; //30-20=10
    first = first - second; //30-10=20
    cout << "After swapping : " << "First : " << first << " Second : " << second;
}