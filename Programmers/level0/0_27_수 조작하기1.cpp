#include <string>
#include <vector>

using namespace std;

int solution(int n, string control)
{
    int answer = n;

    for (auto i : control)
    {
        if (i == 'w')
            answer++;
        else if (i == 's')
            answer--;
        else if (i == 'd')
            answer += 10;
        else if (i == 'a')
            answer -= 10;
    }

    return answer;
}