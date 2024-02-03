#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c)
{
    string answer = "";

    int index = 0;

    while (index < my_string.size())
    {
        answer += my_string[index + c - 1];
        index += m;
    }

    return answer;
}