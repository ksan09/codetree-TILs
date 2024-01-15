#include <iostream>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <string>
using namespace std;

unordered_set<int> s;

int main() {
    int n, n2;
    cin >> n >> n2;

    int key;
    for (int i = 0; i < n + n2; ++i)
    {
        cin >> key;
        if (s.find(key) != s.end())
            s.erase(key);
        else
            s.insert(key);
    }

    cout << s.size();

    return 0;
}