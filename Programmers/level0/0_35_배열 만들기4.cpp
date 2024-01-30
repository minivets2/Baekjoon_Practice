#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> stk;
    int i = 0;

    while (i < arr.size())
    {

        if (stk.empty())
        {
            stk.push_back(arr[i]);
            i++;
        }
        else if (!stk.empty() && stk[stk.size() - 1] < arr[i])
        {
            stk.push_back(arr[i]);
            i++;
        }
        else if (!stk.empty() && stk[stk.size() - 1] >= arr[i])
        {
            stk.erase(stk.end() - 1, stk.end());
        }

    }

    return stk;
}