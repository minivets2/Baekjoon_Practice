#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog)
{
    string answer = "";
    int num = numLog[0];

    for (int i = 1; i < numLog.size(); i++)
    {
        int n = numLog[i] - num;

        if (n == 1)
            answer += "w";
        else if (n == -1)
            answer += "s";
        else if (n == 10)
            answer += "d";
        else if (n == -10)
            answer += "a";

        num = numLog[i];
    }

    return answer;
}