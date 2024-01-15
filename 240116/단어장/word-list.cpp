#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;

map<string, int> m;

void Func(string command)
{
    m[command]++;
}

int main() {
    int n;
    cin >> n;

    string command;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> command;
        Func(command);
    }

    for (auto pair : m)
    {
        cout << pair.first << ' ' << pair.second << '\n';
    }

    return 0;
}