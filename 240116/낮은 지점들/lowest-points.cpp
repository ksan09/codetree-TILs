#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<long, long> m;
    int n;
    cin >> n;

    long key, value;
    for (int i = 0; i < 5; ++i)
    {
        cin >> key >> value;
        if (m.find(key) != m.end())
        {
            if (value < m[key])
            {
                m[key] = value;
            }
        }
        else
        {
            m.insert({ key, value });
        }
    }

    int ans = 0;
    for (auto pair : m)
    {
        ans += pair.second;
    }

    cout << ans;

    return 0;
}