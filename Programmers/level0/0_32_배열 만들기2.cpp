#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r)
{
    vector<int> answer;

    for (int i = l; i <= r; i++)
    {
        string s = to_string(i);
        bool flag = true;

        for (auto j : s)
        {
            if (j == '0' || j == '5')
                continue;
            else
                flag = false;
        }

        if (flag)
            answer.push_back(i);
    }

    if (answer.empty())
        answer.push_back(-1);

    return answer;
}