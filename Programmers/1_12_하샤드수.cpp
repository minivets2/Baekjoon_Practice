#include <string>
#include <vector>

using namespace std;

bool solution(int x)
{
    string s = to_string(x);
    int sum = 0;

    for (auto i : s)
    {
        sum += i - '0';
    }

    return x % sum == 0 ? true : false;
}