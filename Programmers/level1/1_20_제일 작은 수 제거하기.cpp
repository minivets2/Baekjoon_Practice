#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    vector<int> sort_arr = arr;

    sort(sort_arr.begin(), sort_arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != sort_arr[0])
            answer.push_back(arr[i]);
    }

    if (answer.empty())
        answer.push_back(-1);

    return answer;
}