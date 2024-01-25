#include <string>
#include <vector>

using namespace std;

string JadenCase(string s)
{
    string answer = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
    }

    if (s[0] == ' ')
    {
        if (isupper(s[1]))
            return s;
        else
            s[1] = toupper(s[1]);
    }
    else if (islower(s[0]))
        s[0] = toupper(s[0]);

    return s;
}

string solution(string s)
{
    string answer = "";
    string word = "";

    for (auto i : s)
    {
        if (i != ' ')
            word += i;
        else
        {
            answer += JadenCase(word);
            word = " ";
        }
    }

    answer += JadenCase(word);

    return answer;
}