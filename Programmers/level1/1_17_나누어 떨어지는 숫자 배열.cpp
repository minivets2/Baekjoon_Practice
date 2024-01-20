#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor)
{
    vector<int> answer;
    vector<int> empty = { -1 };

    sort(arr.begin(), arr.end());

    for (auto i : arr)
    {
        if (i % divisor == 0)
            answer.push_back(i);
    }

    return answer.empty() ? empty : answer;
}