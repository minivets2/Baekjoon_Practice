#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    bool answer = false;
    bool flag = true;

    if (s[0] == ')')
        return answer;

    while (true)
    {
        flag = true;

        for (int i = 0; i < s.size(); i++)
        {
            if (i >= 1)
            {
                if (s[i] == ')' && s[i - 1] == '(')
                {
                    flag = false;
                    s.erase(s.begin() + i - 1, s.begin() + i + 1);
                    break;
                }
            }
        }

        if (flag || s.empty())
            break;
    }

    return flag ? false : true;
}