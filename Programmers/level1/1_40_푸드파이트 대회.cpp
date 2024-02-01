#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food)
{
    string answer = "";

    for (int i = 1; i < food.size(); i++)
    {
        if (food[i] > 1)
        {
            for (int j = 0; j < food[i] / 2; j++)
            {
                answer += to_string(i);
            }
        }
    }

    string answer_reverse = answer;
    reverse(answer_reverse.begin(), answer_reverse.end());

    answer += "0" + answer_reverse;

    return answer;
}