#include <string>
#include <vector>

using namespace std;

int solution(string t, string p)
{
    int result = 0;

    for (int i = 0; i <= t.size() - p.size(); i++)
    {
        string newstr = t.substr(i, p.size());

        if (newstr <= p)
            result++;
    }

    return result;
}