#include <string>
#include <vector>
#include <iostream>

using namespace std;

int counOfOne(int n)
{
    int count = 0;
    int num = n;

    while (true)
    {
        if (num % 2 == 1)
            count++;

        num /= 2;

        if (num == 0)
            break;
    }

    return count;
}

int solution(int n)
{
    int answer = 0;
    int count = counOfOne(n);

    for (int i = n + 1; i <= 1000000; i++)
    {
        if (count == counOfOne(i))
        {
            answer = i;
            break;
        }
    }

    return answer;
}