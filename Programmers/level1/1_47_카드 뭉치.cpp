#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
    int goalIndex = 0;
    int index1 = 0;
    int index2 = 0;
    bool flag = false;

    while (goalIndex < goal.size())
    {
        flag = false;

        if (cards1[index1] == goal[goalIndex])
        {
            index1++;
            flag = true;
            goalIndex++;

            goto g;
        }

        if (cards2[index2] == goal[goalIndex])
        {
            index2++;
            flag = true;
            goalIndex++;

            goto g;
        }

    g:

        if (flag == false)
            break;
    }

    return flag ? "Yes" : "No";
}