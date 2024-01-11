#include <iostream>
#include <algorithm>

using namespace std;

int arr[101];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for(int i = 1; i <= n; ++i)
    {
        if(arr[i] % 2 == 1)
            cout << arr[i / 2] << ' ';
    }

    return 0;
}