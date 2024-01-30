#include <string>
#include <vector>
#include <cmath>

using namespace std;

string reverseOfBase3(int n)
{
    string s = "";
    int answer = 0;

    if (n < 3)
    {
        s = to_string(n);
        return s;
    }

    while (true)
    {
        s += to_string(n % 3);

        n /= 3;

        if (n < 3)
            break;
    }

    s += to_string(n);

    return s;
}

int base3ToBase10(string num)
{
    int answer = 0;
    int n = num.size() - 1;

    for (auto i : num)
    {
        answer += (i - '0') * pow(3, n);
        n--;
    }

    return answer;
}

int solution(int n)
{
    return base3ToBase10(reverseOfBase3(n));
}