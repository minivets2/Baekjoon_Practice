#include <string>
#include <vector>

using namespace std;

string solution(string code)
{
    string answer = "";
    bool mode = false; // mode = 0

    for (int i = 0; i < code.size(); i++)
    {
        if (code[i] == '1' && mode)
            mode = false;
        else if (code[i] == '1' && mode == false)
            mode = true;

        if (mode == false && i % 2 == 0 && code[i] != '1')
            answer += code[i];
        else if (mode && i % 2 != 0 && code[i] != '1')
            answer += code[i];
    }

    return answer.empty() ? "EMPTY" : answer;
}