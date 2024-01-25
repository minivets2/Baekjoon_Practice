#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
    vector<int> answer;

    for (int i = 0; i < queries.size(); i++)
    {
        int num = 1000001;
        bool flag = false;

        for (int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            if (arr[j] > queries[i][2])
            {
                num = min(num, arr[j]);
                flag = true;
            }
        }

        if (flag)
            answer.push_back(num);
        else
            answer.push_back(-1);
    }

    return answer;
}