#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = s;

    int word_index = 0;
    int index = 0;

    while (index < s.size())
    {
        if (s[index] != ' ')
        {
            if (word_index % 2 == 0)
                answer[index] = toupper(answer[index]);
            else
                answer[index] = tolower(answer[index]);

            word_index++;
        }
        else
        {
            word_index = 0;
        }

        index++;
    }

    return answer;
}