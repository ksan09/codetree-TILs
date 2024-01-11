#include <iostream>
using namespace std;

int arr[10];

int Func(int n, int value)
{
    bool check = true;

    for(int i = 0; i < n; ++i)
        if(value % arr[i] != 0)
        {
            check = false;
            break;
        }
    
    if(check)
        return value;

    return Func(n, value + 1);
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << Func(n, 1);

    return 0;
}