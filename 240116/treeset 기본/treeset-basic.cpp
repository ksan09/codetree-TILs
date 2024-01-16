#include <iostream>
#include <set>
#include <string>
using namespace std;

set<int> s;

int main() {
    int n;
    cin >> n;

    string command;
    int key;
    for (int i = 0; i < n; ++i)
    {
        cin >> command;
        if (command == "add")
        {
            cin >> key;
            s.insert(key);
        }
        else if (command == "remove")
        {
            cin >> key;
            s.erase(key);
        }
        else if (command == "find")
        {
            cin >> key;
            if (s.find(key) != s.end())
                cout << "true" << '\n';
            else
                cout << "false" << '\n';
        }
        else if (command == "lower_bound")
        {
            cin >> key;
            if (s.empty() || s.lower_bound(key) == s.end())
                cout << "None" << '\n';
            else
                cout << *s.lower_bound(key) << '\n';
        }
        else if (command == "upper_bound")
        {
            cin >> key;
            if (s.empty() || s.upper_bound(key) == s.end())
                cout << "None" << '\n';
            else
                cout << *s.upper_bound(key) << '\n';
        }
        else if (command == "largest")
        {
            if (s.empty())
                cout << "None" << '\n';
            else
                cout << *s.rbegin() << '\n';
        }
        else if (command == "smallest")
        {
            if (s.empty())
                cout << "None" << '\n';
            else
                cout << *s.begin() << '\n';
        }
    }

    return 0;
}