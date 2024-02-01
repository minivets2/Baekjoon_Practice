#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n)
{
    string answer = "";

    for (auto i : s)
    {
        int N = n;

        if (i != ' ' && ((isupper(i) && i + n > 90) || (islower(i) && i + n > 122)))
            N -= 26;
        else if (i == ' ')
            N = 0;

        answer += i + N;
    }

    return answer;
}