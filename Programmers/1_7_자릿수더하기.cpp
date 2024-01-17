#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string s = to_string(n);

    for (auto i : s)
    {
        answer += i - '0';
    }

    return answer;
}