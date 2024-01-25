#include <string>
#include <vector>

using namespace std;

bool check(int start_num, int n)
{
    bool answer = false;
    int sum = 0;

    for (int i = start_num; i <= 10000; i++)
    {
        sum += i;

        if (sum == n)
        {
            answer = true;
            break;
        }
        else if (sum > n)
        {
            break;
        }
    }

    return answer;
}

int solution(int n)
{
    int start_num = 1;
    int count = 0;

    while (start_num <= n)
    {
        if (check(start_num, n))
            count++;

        start_num++;
    }

    return count;
}