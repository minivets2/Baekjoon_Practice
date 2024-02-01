#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;
    string find_string = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (find_string.find(s[i]) == string::npos)
            answer.push_back(-1);
        else
        {
            for (int j = find_string.size() - 1; j >= 0; j--)
            {
                if (find_string[j] == s[i])
                {
                    answer.push_back(find_string.size() - j);
                    break;
                }
            }
        }

        find_string += s[i];
    }

    return answer;
}