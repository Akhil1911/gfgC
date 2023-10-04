#include <iostream>
using namespace std;

int main()
{
    const int i = 2, j = 3;
    int arr[i][j] = {{1, 2, 3},
                     {4, 5, 6}};
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            cout << arr[a][b] << " ";
        }
        cout << endl;
    }
    return 0;
}
