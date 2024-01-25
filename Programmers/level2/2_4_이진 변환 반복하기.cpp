#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string getBinaryNum(int num)
{
    int n = num;
    string s = "";

    while (n != 0)
    {
        s += to_string(n % 2);
        n /= 2;
    }

    reverse(s.begin(), s.begin());

    return s;
}

vector<int> solution(string s)
{
    vector<int> answer;
    string text = s;

    int Count_Zero = 0;
    int count = 0;

    while (text != "1")
    {
        int count_zero = 0;

        for (auto i : text)
        {
            if (i == '0')
                count_zero++;
        }

        text = getBinaryNum(text.size() - count_zero);
        Count_Zero += count_zero;
        count++;
    }

    answer.push_back(count);
    answer.push_back(Count_Zero);

    return answer;
}