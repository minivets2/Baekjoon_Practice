#include <string>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool flag = true;
    for (auto i : s)
    {
        if (isdigit(i) == false)
        {
            flag = false;
            break;
        }
    }

    return (s.size() == 4 || s.size() == 6) && flag ? true : false;
}