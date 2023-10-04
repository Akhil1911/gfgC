#include <iostream>
using namespace std;
bool checkPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}
int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    if (x < y)
    {
        for (int i = x; i <= y; i++)
        {
            checkPrime(i) ? cout << i << " " : cout << "";
        }
    }else{
        cout << "Enter first number <= secnd number";
    }
}