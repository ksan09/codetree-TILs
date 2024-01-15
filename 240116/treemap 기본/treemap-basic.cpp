#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;

map<int, int> m;

void Func(string command)
{
    int key, value;
    if (command == "add")
    {
        cin >> key >> value;
        m[key] = value;
    }
    else if (command == "find")
    {
        cin >> key;
        if (m.find(key) != m.end())
        {
            cout << m[key] << '\n';
        }
        else
        {
            cout << "None" << '\n';
        }
    }
    else if (command == "remove")
    {
        cin >> key;
        m.erase(key);
    }
    else if (command == "print_list")
    {
        if(m.empty())
        {
            cout << "None";
            return;
        }

        for (auto pair : m)
        {
            cout << pair.second << ' ';
        }
        cout << '\n';
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