#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Compare(const pair<pair<int, int>, int>& a, const pair<pair<int, int>, int>& b)
{
    bool CpVal = true;

    if (a.first.first < b.first.first)
        return CpVal;
    else if (a.first.first > b.first.first)
        return !CpVal;
    else if (a.first.second < b.first.second)
        return CpVal;

    return !CpVal;
}

vector<pair<pair<int, int>, int>> students;

int main() {
    int h, w;
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> h >> w;
        students.push_back({ {h, w}, i });
    }

    sort(students.begin(), students.end(), Compare);

    for (auto st : students)
    {
        cout << st.first.first << ' ' << st.first.second << ' ' << st.second << '\n';
    }


    return 0;
}