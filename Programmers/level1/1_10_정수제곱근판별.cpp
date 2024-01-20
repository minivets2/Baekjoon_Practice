#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

long long solution(long long n)
{
    long long answer = 0;

    double num = sqrt(n);

    if (num - (int)num == 0)
        answer = (num + 1) * (num + 1);
    else
        answer = -1;

    return answer;
}