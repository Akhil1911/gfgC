#include<iostream>
using namespace std;
int main()
{
    int first,second,temp;
    cout << "Enter first number : " ;
    cin >> first;
    cout << endl
         << "Enter second number : ";
    cin >> second;
    temp = first;
    first = second;
    second = temp;
    cout << "After swapping : " << endl;
    cout << "First : " << first << " Second : " << second;
}