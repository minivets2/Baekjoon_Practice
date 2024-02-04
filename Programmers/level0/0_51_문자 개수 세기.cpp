#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string)
{
    vector<int> answer(52);

    for (int i = 0; i < my_string.size(); i++)
    {
        char c = my_string[i];

        if (islower(c))
            answer[(int)c - 71] += 1;
        else
            answer[(int)c - 65] += 1;
    }

    return answer;
}