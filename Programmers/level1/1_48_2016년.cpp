#include <string>
#include <vector>

using namespace std;

string solution(int a, int b)
{
    vector<int> dayCount = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    vector<string> dayOfTheWeek = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };

    int day = b;
    for (int i = 1; i < a; i++)
    {
        day += dayCount[i];
    }

    return dayOfTheWeek[day % 7];
}