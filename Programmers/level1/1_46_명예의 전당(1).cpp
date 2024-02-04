#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score)
{
    vector<int> answer;
    vector<int> scores;

    int day = 1;
    while (day <= score.size())
    {
        scores.push_back(score[day - 1]);
        sort(scores.begin(), scores.end(), greater<int>());

        if (scores.size() >= k)
            answer.push_back(scores[k - 1]);
        else
            answer.push_back(scores[day - 1]);

        day++;
    }

    return answer;
}