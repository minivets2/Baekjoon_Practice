#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> nums;

void addNumber(string s)
{
    if (s[0] == '-')
    {
        s.erase(s.begin(), s.begin() + 1);
        nums.push_back(stoi(s) * -1);
    }
    else
    {
        nums.push_back(stoi(s));
    }
}

string solution(string s)
{
    string answer = "";
    string s_num = "";

    for (auto i : s)
    {
        if (i != ' ')
            s_num += i;
        else
        {
            addNumber(s_num);
            s_num = "";
        }
    }

    addNumber(s_num);

    sort(nums.begin(), nums.end());

    answer = to_string(nums[0]) + " " + to_string(nums[nums.size() - 1]);

    return answer;
}