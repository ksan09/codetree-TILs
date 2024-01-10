#include <iostream>

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = n; i <= n * m; ++i)
    {
        if(i % n == 0 && i % m == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}