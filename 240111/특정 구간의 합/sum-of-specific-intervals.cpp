#include <iostream>
using namespace std;

int arr[101];

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
    }

    int a, b;
    for(int i = 0; i < m; ++i)
    {
        cin >> a >> b;
        int ans = 0;
        for(a; a <= b; ++a)
        {
            ans += arr[a];
        }
        cout << ans << '\n';
    }

    return 0;
}