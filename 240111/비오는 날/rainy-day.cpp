#include <iostream>
#include <map>

using namespace std;

map<string, pair<string, string>> info;

int main() {
    string date, day, weather;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> date >> day >> weather;
        info.insert({ date, {day, weather} });
    }

    for (auto weatherInfo : info)
    {
        if (weatherInfo.second.second == "Rain")
        {
            cout << weatherInfo.first << ' ' << weatherInfo.second.first << ' ' << weatherInfo.second.second;
            break;
        }
    }


    return 0;
}