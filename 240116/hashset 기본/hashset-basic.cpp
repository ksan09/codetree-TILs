#include <iostream>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <string>
using namespace std;

unordered_set<int> s;

void Func(string command)
{
    int key;
    cin >> key;

    if (command == "add")
    {
        s.insert(key);
    }
    else if (command == "find")
    {
        if (s.find(key) != s.end())
            cout << "true" << '\n';
        else
            cout << "false" << '\n';
    }
    else if (command == "remove")
    {
        s.erase(key);
    }
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

    return 0;
}