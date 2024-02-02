#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo)
{
    vector<int> answer;
    map<string, int> score;

    for (int i = 0; i < name.size(); i++)
    {
        score.insert(make_pair(name[i], yearning[i]));
    }

    for (int i = 0; i < photo.size(); i++)
    {
        int s = 0;

        for (int j = 0; j < photo[i].size(); j++)
        {
            s += score[photo[i][j]];
        }

        answer.push_back(s);
    }


    return answer;
}