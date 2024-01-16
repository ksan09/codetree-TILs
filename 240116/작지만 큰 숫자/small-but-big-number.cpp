#include <iostream>
#include <set>
#include <string>
using namespace std;

set<int> s;

int main() {
    int n, m;
    cin >> n >> m;

    int key;
    for (int i = 0; i < n; ++i)
    {
        cin >> key;
        s.insert(key * -1);
    }

    for (int i = 0; i < m; ++i)
    {
        cin >> key;
        if (s.lower_bound(key * -1) != s.end())
        {

            cout << *s.lower_bound(key * -1) * -1 << '\n';
            s.erase(s.lower_bound(key * -1));
        }
        else
            cout << "-1" << '\n';
    }
    

    return 0;
}