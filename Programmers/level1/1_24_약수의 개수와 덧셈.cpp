#include <string>
#include <vector>

using namespace std;

int getNumber(int num)
{
    int count = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }

    return count % 2 == 0 ? num : num * -1;
}

int solution(int left, int right)
{
    int answer = 0;

    for (int i = left; i <= right; i++)
    {
        answer += getNumber(i);
    }

    return answer;
}