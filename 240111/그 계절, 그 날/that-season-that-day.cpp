#include <iostream>
using namespace std;

string Season(int year, int month, int day)
{
    // 윤년 체크
    // 4의 배수, 4의 배수인데 100의 배수가 아님, 400의 배수
    bool leapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if ((leapYear && month == 2 && day > 29)
        && (!leapYear && month == 2 && day > 28))
    {
        return "-1";
    }
    else if ((month == 1 || month == 3 || month == 5
        || month == 7 || month == 8 || month == 10 || month == 12)
        && day > 31)
    {
        return "-1";
    }
    else if ((month == 4 || month == 6 || month == 9
        || month == 11) && day > 30)
    {
        return "-1";
    }

    if (month >= 3 && month <= 5)
        return "Spring";
    else if (month >= 6 && month <= 8)
        return "Summer";
    else if (month >= 9 && month <= 11)
        return "Fall";
    else if (month >= 12 || month <= 2)
        return "Winter";

    return "-1";
}

int main() {
    int year, month, day;
    cin >> year >> month >> day;

    cout << Season(year, month, day);

    return 0;
}