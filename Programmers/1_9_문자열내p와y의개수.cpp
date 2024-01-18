#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    int count_p = 0;
    int count_y = 0;

    for (auto i : s)
    {
        if (i == 'p' || i == 'P')
            count_p++;
        else if (i == 'y' || i == 'Y')
            count_y++;
    }

    if (count_p != count_y)
        answer = false;

    return answer;
}