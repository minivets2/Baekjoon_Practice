#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b)
{
    long long answer = 0;
    int small_num, big_num;

    if (a > b)
    {
        small_num = b;
        big_num = a;
    }
    else
    {
        small_num = a;
        big_num = b;
    }

    for (int i = small_num; i <= big_num; i++)
    {
        answer += i;
    }

    return answer;
}