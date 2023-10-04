#include <iostream>
using namespace std;

int main()
{
    int n;
    char c;
    int entry;
    cout << "To get ascii of entered value enter 1 or to get value of entered ascii enter 2" << endl;
    cin >> entry;
    if(entry == 1){
        cout << "Enter value to get it's ascii : ";
        cin >> n;
        cout << char(n);
    }else if(entry == 2){
        cout << "Enter ascii to get it's value : ";
        cin >> c;
        cout << int(c);
    }else{
        cout << "Invalid input";
    }
}