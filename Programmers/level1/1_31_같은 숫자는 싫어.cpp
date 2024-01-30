#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    int index = 0;

    while (index < arr.size())
    {
        if (answer.empty())
            answer.push_back(arr[index]);
        else if (!answer.empty() && answer[answer.size() - 1] != arr[index])
            answer.push_back(arr[index]);

        index++;
    }

    return answer;
}