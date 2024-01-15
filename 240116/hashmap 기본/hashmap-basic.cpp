#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> m;
    string command;
    int key, value;
    for (int i = 0; i < n; ++i)
    {
        cin >> command;
        if (command == "add")
        {
            cin >> key >> value;
            m[key] = value;
        }
        else if (command == "remove")
        {
            cin >> key;
            m.erase(key);
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
    }

    return 0;
}